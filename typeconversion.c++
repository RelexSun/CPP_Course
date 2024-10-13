#include <iostream>

int main() {
  /*
    type conversion = conversion a value of one data type of another 
    Implicit = automatic
    Explicit = Precede value with new data type (int)
  */
  
  char y = 100;
  std::cout << y; // display char of number 100
  std::cout << (int)y; // display number of cahr 100

  double x = (int) 3.14;

  std::cout << x;


  return 0;
}