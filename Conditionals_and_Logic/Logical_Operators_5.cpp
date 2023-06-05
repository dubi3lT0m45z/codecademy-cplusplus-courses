#include <iostream>

bool is_four_digits(int number)
{
  if(number / 1000 < 1)
    return false;
  else
    return true;
}

void is_leap_year(int year)
{
  if(year % 4 == 0)
  {
    if(year % 100 == 0 && year % 400 != 0)
      std::cout << "year " << year << " is NOT a leap year\n";
    else if(year % 400 == 0)
      std::cout << "year " << year << " is a leap year\n";
    else
      std::cout << "year " << year << " is a leap year\n";
  }
  else
    std::cout << "year " << year << " is NOT a leap year\n";
}

int main() {
  int year;
  std::cin >> year;
  
  if(!is_four_digits(year))
    std::cout << "Try again\n";
  else
    is_leap_year(year);

  return 0;
}
