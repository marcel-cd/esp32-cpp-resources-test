#if TEST_IOSTREAM
#include "test_iostream.h"
extern "C" void test_iostream() {
  TestIOStream test_iostream;
  test_iostream.run();
}
#else
extern "C" void test_iostream() {}
#endif

#if TEST_STRING
#include "test_string.h"
extern "C" void test_string() {
  TestString test_string;
  test_string.run();
}
#else
extern "C" void test_string() {}
#endif

extern "C" void app_main() {
  test_iostream();
  test_string();
}
