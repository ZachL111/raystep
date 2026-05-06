# raystep

`raystep` is a focused C++ codebase around render signed-distance scenes to PPM fixtures with camera controls. It is meant to be easy to inspect, run, and extend without a hosted service.

## Raystep Walkthrough

I would read the project from the outside in: command, fixture, model, then roadmap. That keeps the graphics idea grounded in files that can be checked locally.

## Reason For The Project

I use this kind of project to make a rule visible before adding more machinery around it. The important part here is not the size of the codebase. It is that the input signals, scoring rule, fixture data, and expected output can all be checked in one sitting.

## Data Notes

The examples are meant to be readable before they are exhaustive. They cover enough variation to show how latency and risk can pull a decision below the threshold.

## How It Is Put Together

The design is intentionally direct: parse or construct a signal, score it, classify it, and verify the expected branch. This makes the repository useful for studying graphics behavior without needing a service or database unless the language project itself is SQL. The C++ project uses a small library boundary and a compiled assertion harness.

## Capabilities

- Models geometry data with deterministic scoring and explicit review decisions.
- Uses fixture data to keep layout fixtures changes visible in code review.
- Includes extended examples for render inputs, including `surge` and `degraded`.
- Documents stable output tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.

## Command Examples

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Check The Work

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Where Things Live

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## Possible Extensions

- Split the scoring constants into a typed configuration object and validate it before use.
- Add a comparison mode that shows how decisions change when one signal is adjusted.
- Add a loader for `examples/extended_cases.csv` and promote selected cases into the language test suite.
- Add one more graphics fixture that focuses on a malformed or borderline input.

## Tradeoffs

The fixture set is deliberately small. That keeps the review surface clear, but it also means the model should not be treated as a complete domain simulator.

## Getting It Running

Install C++ and run the commands from the repository root. The project does not need credentials or a hosted service.
