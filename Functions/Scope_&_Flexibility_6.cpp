///main.cpp
#include <iostream>
#include "num_ops.hpp"

int main() {
  std::cout << fancy_number(12, 3) << "\n";
  std::cout << fancy_number(12, 3, 19) << "\n";
  std::cout << fancy_number(13.5, 3.8) << "\n";
}

///num_ops.hpp
int fancy_number(int num1, int num2);
int fancy_number(int num1, int num2, int num3);
int fancy_number(double num1, double num2);

///num_ops.cpp
int fancy_number(int num1, int num2) {
  return num1 - num2 + (num1 * num2);
}

int fancy_number(int num1, int num2, int num3) {
  return num1 - num2 - num3 + (num1 * num2 * num3);
}

int fancy_number(double num1, double num2) {
  return num1 - num2 + (num1 * num2);
}
