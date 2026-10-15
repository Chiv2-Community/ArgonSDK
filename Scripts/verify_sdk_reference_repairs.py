"""Compare SDKReferenceRepair reports from before and after the targeted repairs."""

import argparse
import json
from pathlib import Path


LEGACY_PROJECTILE_EVENTS = {
    "BroadcastProjectileWorldBlockingHit",
    "BroadcastNonWorldBlockingHit",
}
RAGDOLL_EVENTS = {"OnRagdollAttach", "OnRagdollDetach"}


def graphs_without_stubs(blueprint, names, custom_only):
    result = {}
    for graph in blueprint["graphs"]:
        result[graph["name"]] = [
            node
            for node in graph["nodes"]
            if not (
                node.get("symbol") in names
                and (not custom_only or node["class"] == "K2Node_CustomEvent")
            )
        ]
    return result


def verify(before, after):
    before = {item["asset"]: item for item in before["blueprints"]}
    after = {item["asset"]: item for item in after["blueprints"]}
    assert before.keys() == after.keys(), "Unexpected Blueprint dependency change"
    for asset, original in before.items():
        fixed = after[asset]
        assert fixed["errors"] == fixed["warnings"] == 0, asset
        assert fixed["parent"] == original["parent"], asset
        if asset.endswith(".Carryable_CatapultRock"):
            assert original["errors"] == 12
            assert graphs_without_stubs(original, LEGACY_PROJECTILE_EVENTS, True) == graphs_without_stubs(fixed, set(), True)
            assert not any(
                node.get("symbol") in LEGACY_PROJECTILE_EVENTS
                for graph in fixed["graphs"] for node in graph["nodes"]
            )
        elif asset.endswith(".BP_BearTrap"):
            assert original["errors"] == 2
            assert graphs_without_stubs(original, RAGDOLL_EVENTS, False) == graphs_without_stubs(fixed, RAGDOLL_EVENTS, False)
            overrides = [
                node for graph in fixed["graphs"] for node in graph["nodes"]
                if node.get("symbol") in RAGDOLL_EVENTS
            ]
            assert {node["symbol"] for node in overrides} == RAGDOLL_EVENTS
            assert len(overrides) == 2
            for node in overrides:
                assert node["class"] == "K2Node_Event"
                assert any(pin["name"] == "Character" and pin["subtype"] == "/Script/TBL.TBLCharacter" for pin in node["pins"])
        else:
            assert original["graphs"] == fixed["graphs"], asset
        if asset.endswith(".RadialVOMenu"):
            assert original["errors"] == 1
            assert fixed["callbackSignature"] == "/Script/UMG.OnInputAction__DelegateSignature"
        for graph in fixed["graphs"]:
            nodes = {node["name"]: node for node in graph["nodes"]}
            for node in graph["nodes"]:
                for pin in node["pins"]:
                    assert not pin["orphaned"], (asset, graph["name"], node["name"], pin["name"])
                    for link in pin["links"]:
                        other_name, other_pin = link.split(".", 1)
                        other = next(p for p in nodes[other_name]["pins"] if p["name"] == other_pin)
                        assert node["name"] + "." + pin["name"] in other["links"]
    print("PASS: 15 original compile errors resolved; callback and interface signatures correct")
    print("PASS: unrelated graph nodes, parent calls and connections preserved; no orphaned pins")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("before", type=Path)
    parser.add_argument("after", type=Path)
    args = parser.parse_args()
    verify(
        json.loads(args.before.read_text(encoding="utf-8-sig")),
        json.loads(args.after.read_text(encoding="utf-8-sig")),
    )
