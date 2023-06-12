#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text)
{
  for(int i = 0; i < text.length()/2; i++)
    if(text[i] != text[text.length()-i-1])
      return false;

  return true;
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
