#include "test_exception.h"
#include <stdexcept>
#include <stdio.h>
using std::runtime_error;

void TestException::run() {
  try {
    throw runtime_error("This is a runtime error");
  } catch (runtime_error &e) {
    printf("Caught runtime error: %s\n", e.what());
  }
}
