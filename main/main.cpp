#include "esp_heap_caps.h"
#include "multi_heap.h"
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <stdio.h>

#include "test_exception.h"
#include "test_iostream.h"
#include "test_string.h"
#include "test_vector.h"

static multi_heap_info_t heap_info;
static void print_heap_stats() {
  heap_caps_get_info(&heap_info, MALLOC_CAP_INTERNAL);
  printf("------------------------\n");
  printf("total_free_bytes      %d\n", heap_info.total_free_bytes);
  printf("total_allocated_bytes %d\n", heap_info.total_allocated_bytes);
  printf("largest_free_block    %d\n", heap_info.largest_free_block);
  printf("minimum_free_bytes    %d\n", heap_info.minimum_free_bytes);
  printf("allocated_blocks      %d\n", heap_info.allocated_blocks);
  printf("free_blocks           %d\n", heap_info.free_blocks);
  printf("total_blocks          %d\n", heap_info.total_blocks);
}
extern "C" void app_main() {
  print_heap_stats();
  (new TestIOStream)->run();
  (new TestString)->run();
  (new TestVector)->run();
  (new TestException)->run();
  print_heap_stats();
}
