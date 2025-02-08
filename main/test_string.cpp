#include "test_string.h"
#include <string>

void TestString::run() {
  std::string str = "Hello, World!";
  printf("%s\n", str.c_str());
  printf("%d\n", str.size());
  printf("%d\n", str.length());
  printf("%d\n", str.capacity());
  printf("%d\n", str.empty());
  printf("%c\n", str[0]);
  printf("%c\n", str.at(0));
  printf("%c\n", str.front());
  printf("%c\n", str.back());
  printf("%s\n", str.c_str());
  printf("%s\n", str.data());
  printf("%d\n", str.find("World"));
  printf("%d\n", str.find("World", 7));
  printf("%d\n", str.rfind("World"));
  printf("%d\n", str.rfind("World", 7));
  printf("%d\n", str.find_first_of("World"));
  printf("%d\n", str.find_first_of("World", 7));
  printf("%d\n", str.find_last_of("World"));
  printf("%d\n", str.find_last_of("World", 7));
  printf("%d\n", str.find_first_not_of("World"));
  printf("%d\n", str.find_first_not_of("World", 7));
  printf("%d\n", str.find_last_not_of("World"));
  printf("%d\n", str.find_last_not_of("World", 7));
  printf("%s\n", str.substr(7).c_str());
  printf("%s\n", str.substr(7, 5).c_str());
  printf("%d\n", str.compare("Hello, World!"));
  printf("%d\n", str.compare(7, 5, "World"));
  printf("%d\n", str.compare(7, 5, "World", 5));
}
