#include "test_iostream.h"
#if TEST_IOSTREAM
#include <iostream>
#endif

void TestIOStream::run() {
#if TEST_IOSTREAM
  std::cout << "Hello, World!" << std::endl;
#endif
}
