#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdio.h>

#if TEST_IOSTREAM
#include "test_iostream.h"
extern "C" void test_iostream() {
  TestIOStream test;
  test.run();
}
#else
extern "C" void test_iostream() {}
#endif

#if TEST_STRING
#include "test_string.h"
extern "C" void test_string() {
  TestString test;
  test.run();
}
#else
extern "C" void test_string() {}
#endif

#if TEST_VECTOR
#include "test_vector.h"
extern "C" void test_vector() {
  TestVector test;
  test.run();
}
#else
extern "C" void test_vector() {}
#endif

extern "C" void app_main() {
  printf("Running tests...\n");
  test_iostream();
  test_string();
  test_vector();

  // log heap usage
  while (1) {
    vTaskDelay(1000 / portTICK_PERIOD_MS);
    printf("Heap usage: %d\n", xPortGetFreeHeapSize());
  }
}
