#undef NDEBUG
#include <cassert>

#include <mp-units/systems/si.h>


int main ()
{
  // This test checks that runtime checks are executed.
  // To succeed, this test must exit with SIGABRT
  // ensuring runtime checks are enabled.
  {
    MP_UNITS_EXPECTS(false);
  }
}
