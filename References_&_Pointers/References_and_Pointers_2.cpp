#include <iostream>

int main() {
  
  int soda = 99;
  
  int &pop = soda;
  pop += 1;

  std::cout << soda << std::endl;
  std::cout << pop << std::endl;
}
