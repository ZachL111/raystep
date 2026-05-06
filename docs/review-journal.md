# Review Journal

The repository goal stays the same: render signed-distance scenes to PPM fixtures with camera controls. This note explains the added review angle.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its graphics focus without claiming live deployment or external usage.

## Cases

- `baseline`: `geometry span`, score 177, lane `ship`
- `stress`: `atlas pressure`, score 165, lane `ship`
- `edge`: `shader drift`, score 208, lane `ship`
- `recovery`: `render budget`, score 204, lane `ship`
- `stale`: `geometry span`, score 212, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
