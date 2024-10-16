#include <iostream>

template <typename T, typename U>

// only the same data type
// T max(T a, T b) {
//   return (a > b) ? a : b;
// }

auto max(T a, U b) { // use auto to mixed return type
  return (a > b) ? a : b;
}

int main() {
  /*
    * function template = describes what a function looks like.
    * 
    * Can be used to generate as many overloaded function as needed, each using different data types
    * 
  */


  std::cout << max(2.0, 10.1) << std::endl;

  std::cout << max("2", "10.1") << std::endl;

  std::cout << max(2, 10) << std::endl;


  return 0;
}