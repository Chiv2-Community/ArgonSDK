# SDK Blueprint reference repairs

Three reference Blueprints at `d9d9759e` fail to compile under UE 4.25:

| Asset | Error | Repair |
| --- | --- | --- |
| `RadialVOMenu` | One error: `BindActionInput.Callback` has no delegate signature. | Restore the exact callback type from `UUserWidget::ListenForInputAction`. |
| `Carryable_CatapultRock` | Twelve errors: two projectile callbacks have an unresolved parameter type. | Restore `ProjectileHit` to `/Script/TBL.ProjectileHitParams`, retaining both callbacks and every connection. |
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
`-SelfTest` checks that projectile signature repair retains connected callbacks,
and that ragdoll conversion refuses linked stubs without removing earlier empty stubs.

`-ContentRoot=<directory>` optionally mounts another checkout's `Content` as
`/Game/`, allowing validation against already-built matching SDK binaries.
This does not change config or native declarations. Without it, the command uses
the current project's Content directory.

## Repair an older checkout

Back up the three assets first. Run the same command with `-Repair` to update
only those assets. Projectile repair changes parameter types in place. Ragdoll
conversion refuses events with connected pins. Packages are saved only if all
three references and their parents compile
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

## Comparison with original shipping assets

The SDK Blueprints are generated reference stubs, not recovered gameplay logic.
Compiler success alone does not establish fidelity to the original asset.
The initial version of this change incorrectly removed the catapult callbacks
as obsolete; direct inspection of the original cooked shipping assets showed
that both callbacks exist and take `ProjectileHitParams`. They are retained and
their exact parameter type is restored instead.

`Tests/shipping-reference-signatures.json` records the declarations inspected
from the installed game's original cooked assets with CUE4Parse. It confirms:

- Both catapult callbacks take `/Script/TBL.ProjectileHitParams` by value.
- The wheel callback uses `/Script/UMG.OnInputAction__DelegateSignature`.
- Bear-trap ragdoll callbacks are native interface events with a `TBLCharacter`
  parameter and public/event/BlueprintEvent flags.

This comparison covers reflected declarations in the cooked originals. It does
not claim to recover original editor graphs or recreate the shipping bytecode
inside the SDK's dummy implementations.
