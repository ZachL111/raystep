# Raystep Walkthrough

The fixture is intentionally compact, so the review starts with the cases that pull farthest apart.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | geometry span | 177 | ship |
| stress | atlas pressure | 165 | ship |
| edge | shader drift | 208 | ship |
| recovery | render budget | 204 | ship |
| stale | geometry span | 212 | ship |

Start with `stale` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

`stale` is the optimistic case; use it to make sure the scoring path still rewards strong signal.
