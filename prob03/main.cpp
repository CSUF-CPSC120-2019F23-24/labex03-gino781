// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int inches, height, remainder;

  std::cout << "Please enter the person's height in inches: ";
  std::cin >> inches;

  height = inches / 12;
  remainder = inches % 12;

  std::cout << "That person is "<< height <<" feet "<< remainder <<" inches.\n";
  
  return 0;
}
