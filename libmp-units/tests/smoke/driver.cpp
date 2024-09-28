#undef NDEBUG
#include <cassert>

#include <mp-units/systems/si.h>


int main ()
{
  using namespace mp_units;

  // Init a quantity.
  //
  {
    quantity x{1, si::metre};

    assert(1 == x.numerical_value_in(si::metre));
  }
}
