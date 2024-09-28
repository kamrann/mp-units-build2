# libmp-units - A C++ library

This is a `build2` package for the [`mp-units`](https://github.com/mpusz/mp-units) C++ library. `mp-units` is a compile-time enabled Modern C++ library that provides compile-time dimensional analysis and unit/quantity manipulation.

## Usage

To start using `mp-units` in your project, add the following `depends` value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libmp-units ^<VERSION>
```

Then import the library target in your `buildfile` as follows:

```
import libs = libmp-units%lib{mp-units}
```

## Importable targets

This package provides the following importable targets:

```
lib{mp-units}
```
<!-- 
## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libmp_units.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES> -->
