# raystep

`raystep` is a C++ project in graphics. Its focus is to render signed-distance scenes to PPM fixtures with camera controls.

## Project Rationale

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Raystep Review Notes

The first comparison I would make is `geometry span` against `atlas pressure` because it shows where the rule is most opinionated.

## Feature Set

- `fixtures/domain_review.csv` adds cases for geometry span and atlas pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/raystep-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `geometry span` and `atlas pressure`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Test Command

The check exercises the source code and the review fixture. `stale` is the high score at 212; `stress` is the low score at 165.

## Next Improvements

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.
