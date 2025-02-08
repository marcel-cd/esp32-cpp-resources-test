#include "test_exception.h"

#if TEST_EXCEPTION
#include <stdexcept>
#include <stdio.h>
using std::runtime_error;
#endif

void TestException::run() {
#if TEST_EXCEPTION
  try {
    throw runtime_error("This is a runtime error");
  } catch (runtime_error &e) {
    printf("Caught runtime error: %s\n", e.what());
  }
#endif
}
