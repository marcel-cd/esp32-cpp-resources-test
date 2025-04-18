#include "test_string.h"
#if TEST_STRING
#include <string>
#endif

void TestString::run() {
#if TEST_STRING
  std::string str = "Hello, World!";
  printf("%s\n", str.c_str());
  printf("%zu\n", str.size());
  printf("%zu\n", str.length());
  printf("%zu\n", str.capacity());
  printf("%d\n", str.empty());
  printf("%c\n", str[0]);
  printf("%c\n", str.at(0));
  printf("%c\n", str.front());
  printf("%c\n", str.back());
  printf("%s\n", str.c_str());
  printf("%s\n", str.data());
  printf("%zu\n", str.find("World"));
  printf("%zu\n", str.find("World", 7));
  printf("%zu\n", str.rfind("World"));
  printf("%zu\n", str.rfind("World", 7));
  printf("%zu\n", str.find_first_of("World"));
  printf("%zu\n", str.find_first_of("World", 7));
  printf("%zu\n", str.find_last_of("World"));
  printf("%zu\n", str.find_last_of("World", 7));
  printf("%zu\n", str.find_first_not_of("World"));
  printf("%zu\n", str.find_first_not_of("World", 7));
  printf("%zu\n", str.find_last_not_of("World"));
  printf("%zu\n", str.find_last_not_of("World", 7));
  printf("%s\n", str.substr(7).c_str());
  printf("%s\n", str.substr(7, 5).c_str());
  printf("%d\n", str.compare("Hello, World!"));
  printf("%d\n", str.compare(7, 5, "World"));
  printf("%d\n", str.compare(7, 5, "World", 5));
#endif
}
