#include "test_iostream.h"

extern "C" void app_main() {
#if USE_IOSTREAM
  TestIOStream test_iostream;
  test_iostream.run();
#endif
}
