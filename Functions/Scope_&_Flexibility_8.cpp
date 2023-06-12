///main.cpp
#include <iostream>
#include "numbers.hpp"

int main() {
  std::cout << get_smallest(100, 60) << "\n";
  std::cout << get_smallest(2543.2, 3254.3) << "\n";
}

///numbers.hpp
// Replace these declarations with a template
template <typename T>
T get_smallest(T num1, T num2) {
  return num2 < num1? num2 : num1;
}
