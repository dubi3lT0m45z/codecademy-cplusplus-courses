#include <iostream>

int main() {
  std::cout << "What is your earth weight?\n";
  double eweight;
  std::cin >> eweight;

  std::cout << "Enter a number for the planet, you want to fight on:\n";
  int planet;
  std::cin >> planet;

  switch(planet){
    case 1 :
      std::cout << "Your weight on planet Mercury would be: " << eweight*0.38 << std::endl;
      break;

    case 2 :
      std::cout << "Your weight on planet Venus would be: " << eweight*0.91 << std::endl;
      break;

    case 3 :
      std::cout << "Your weight on planet Mars would be: " << eweight*0.38 << std::endl;
      break;

    case 4 :
      std::cout << "Your weight on planet Jupiter would be: " << eweight*2.34 << std::endl;
      break;

    case 5 :
      std::cout << "Your weight on planet Saturn would be: " << eweight*1.06 << std::endl;
      break;

    case 6 :
      std::cout << "Your weight on planet Uranus would be: " << eweight*0.92 << std::endl;
      break;

    case 7 :
      std::cout << "Your weight on planet Neptune would be: " << eweight*1.19 << std::endl;
      break;

    default:
      std::cout << "Could you try again?\n";
      break;
  }
}
