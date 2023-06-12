///main.cpp
#include <iostream>
#include <chrono>

#include "night.hpp"

int main() {
  
  // Measure time taken for goodnight1():
  std::chrono::high_resolution_clock::time_point start = std::chrono::high_resolution_clock::now();

  std::cout << goodnight1("tulip");
  
  std::chrono::high_resolution_clock::time_point end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double, std::milli> time_span = end - start;

  // Print time taken for goodnight1():
  std::cout << "Time taken for goodnight1(): " << time_span.count() << " milliseconds.\n\n";
  
  
  std::cout << goodnight2("eraser", "ivy");
  
}

///night.hpp
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}
std::string goodnight2(std::string thing1, std::string thing2);

///night.cpp
#include <string>

std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}
