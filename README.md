# mp-units - The quantities and units library for C++

This is a `build2` package repository for [`mp-units`](https://<UPSTREAM-URL>),
a quantities and units library for C++.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`mp-units` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `mp-units` uses the standard `bdep`-based workflow.
For example:

```
git clone .../mp-units.git
cd mp-units

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
