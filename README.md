# mp-units - The quantities and units library for C++

This is a `build2` package repository for [`mp-units`](https://github.com/mpusz/mp-units),
a quantities and units library for C++.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`mp-units` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libmp-units/PACKAGE-README.md) file.

The development setup for `mp-units` uses the standard `bdep`-based workflow.
For example:

```
git clone .../mp-units.git
cd mp-units

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```

## Feature support

- Uses STL `<format>`
- Uses MS-GSL for contracts
- No support for the modules variant
- No support for freestanding build
- Default behaviour regarding string_view and CRTP variants (enabled if supported)
