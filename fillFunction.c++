#include <iostream>

int main() {
  /*
  fill() = Fills a range of elements with a specified value
        fill(begin, end, value)
  */

  const int size = 99;
  std::string foods[size];

  fill(foods, foods + (size/3)*2, "pizza");
  fill(foods + (size/3), foods + (size/3)*2, "apple");
  fill(foods + (size/3)*2, foods + size, "hotdogs");

  for(std::string food : foods) {
    std::cout << food << "\n";
  }

  return 0;
}