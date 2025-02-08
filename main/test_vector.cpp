#include "test_vector.h"

#if TEST_VECTOR
#include <stdio.h>
#include <vector>
#endif

void TestVector::run() {
#if TEST_VECTOR
  std::vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);

  printf("v.size() = %d\n", v.size());
  v.pop_back();
  printf("v.size() = %d\n", v.size());
  v.pop_back();
  printf("v.size() = %d\n", v.size());
  v.pop_back();
  printf("v.size() = %d\n", v.size());
  v.pop_back();
  printf("v.size() = %d\n", v.size());
#endif
}
