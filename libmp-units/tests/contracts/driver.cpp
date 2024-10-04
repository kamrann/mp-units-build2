#include <csignal>
#include <mp-units/systems/si.h>


void signal_handler(int signal)
{
  if (signal == SIGABRT)
  {
    std::exit(0);
  }
}


int main ()
{
  // This test checks that runtime checks are executed.
  // To succeed, this test must exit with SIGABRT
  // ensuring runtime checks are enabled.
  auto previous_handler = std::signal(SIGABRT, signal_handler);

  MP_UNITS_EXPECTS(false);

  return 127;
}
