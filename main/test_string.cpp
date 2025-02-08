#include "test_string.h"
#include <iostream>
#include <string>

void TestString::run() {
  std::string str = "Hello, World!";
  std::cout << str << std::endl;
  std::cout << str.size() << std::endl;
  std::cout << str.length() << std::endl;
  std::cout << str.capacity() << std::endl;
  std::cout << str.empty() << std::endl;
  std::cout << str[0] << std::endl;
  std::cout << str.at(0) << std::endl;
  std::cout << str.front() << std::endl;
  std::cout << str.back() << std::endl;
  std::cout << str.c_str() << std::endl;
  std::cout << str.data() << std::endl;
  std::cout << str.find("World") << std::endl;
  std::cout << str.find("World", 7) << std::endl;
  std::cout << str.rfind("World") << std::endl;
  std::cout << str.rfind("World", 7) << std::endl;
  std::cout << str.find_first_of("World") << std::endl;
  std::cout << str.find_first_of("World", 7) << std::endl;
  std::cout << str.find_last_of("World") << std::endl;
  std::cout << str.find_last_of("World", 7) << std::endl;
  std::cout << str.find_first_not_of("World") << std::endl;
  std::cout << str.find_first_not_of("World", 7) << std::endl;
  std::cout << str.find_last_not_of("World") << std::endl;
  std::cout << str.find_last_not_of("World", 7) << std::endl;
  std::cout << str.substr(7) << std::endl;
  std::cout << str.substr(7, 5) << std::endl;
  std::cout << str.compare("Hello, World!") << std::endl;
  std::cout << str.compare(7, 5, "World") << std::endl;
  std::cout << str.compare(7, 5, "World", 5) << std::endl;
}
