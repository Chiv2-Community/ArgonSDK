# SDK Blueprint reference repairs

Three reference Blueprints at `d9d9759e` fail to compile under UE 4.25:

| Asset | Error | Repair |
| --- | --- | --- |
| `RadialVOMenu` | One error: `BindActionInput.Callback` has no delegate signature. | Restore the exact callback type from `UUserWidget::ListenForInputAction`. |
| `Carryable_CatapultRock` | Twelve errors: two unused custom events refer to a missing projectile-hit structure. | Remove only the two unconnected legacy event stubs; keep BeginPlay, overlap and Tick parent forwarding. |
| `BP_BearTrap` | Two errors: custom events duplicate native ragdoll interface functions. | Replace the two empty custom events with native interface override events, retaining their positions and `Character` parameter type. |

The corrected `.uasset` files are included. This editor-only plugin provides
reproducible diagnostics and guarded repairs for existing checkouts. It adds no
runtime gameplay implementation. SDK reference assets still rely on the shipping
game for native behavior and should not be packaged over the original game assets.

## Verify

Build `TBLEditor` after installing the plugin, then run the following commands
with the paths appropriate to your engine and checkout:

```powershell
& "$Engine/Engine/Build/BatchFiles/Build.bat" TBLEditor Win64 Development "-Project=$SDK/TBL.uproject" -WaitMutex -NoHotReloadFromIDE
& "$Engine/Engine/Binaries/Win64/UE4Editor-Cmd.exe" "$SDK/TBL.uproject" -run=SDKReferenceRepair "-Report=$SDK/Saved/SDKReferenceReport.json" -unattended -stdout
& "$Engine/Engine/Binaries/Win64/UE4Editor-Cmd.exe" "$SDK/TBL.uproject" -run=SDKReferenceRepair -SelfTest -unattended -stdout
```

The default command is read-only: it compiles the three references and their
Blueprint parent chains without saving packages. It requires zero Blueprint
compiler errors/warnings and the exact native wheel callback signature.
`-SelfTest` checks that both repair paths refuse linked event stubs, including
preserving earlier empty stubs when a later stub has connected logic.

`-ContentRoot=<directory>` optionally mounts another checkout's `Content` as
`/Game/`, allowing validation against already-built matching SDK binaries.
This does not change config or native declarations. Without it, the command uses
the current project's Content directory.

## Repair an older checkout

Back up the three assets first. Run the same command with `-Repair` to update
only those assets. It refuses to remove or replace any event with connected
pins. Packages are saved only if all three references and their parents compile
with zero Blueprint errors/warnings.

Unreal may report the original errors during the first load, before the repair
runs, and therefore return a nonzero process exit even when the repair succeeds.
Always verify in a fresh process without `-Repair`; that process must exit zero.

To compare the original and repaired graphs, capture reports before and after
repair, then run:

```powershell
python "$SDK/Scripts/verify_sdk_reference_repairs.py" before.json after.json
```

The comparison requires the expected 1/12/2 original error counts, verifies
the corrected signatures, preserves every unrelated graph node and parent call,
and checks reciprocal links and orphaned pins. Editor compile checks do not
replace in-game physics, damage, emote input or multiplayer testing.
