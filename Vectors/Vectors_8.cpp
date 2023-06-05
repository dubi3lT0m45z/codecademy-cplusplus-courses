#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};

  int sum = 0, product = 1;

  for(int i = 0; i < numbers.size(); i++)
  {
    if(numbers[i] % 2 == 0)
        sum += numbers[i];
    else
      product *= numbers[i];
  }

  std::cout << sum << " " << product;
}
