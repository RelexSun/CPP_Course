#include <iostream>

class Pizza {
  public:
    std::string tooping1;
    std::string tooping2;

    Pizza() {
      
    }

    Pizza(std::string topping1) {
      this->tooping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2) {
      this->tooping1 = topping1;
      this->tooping2 = topping2;
    }
};

int main() {

/*
  *   overloading constructors = multiple constructors w/ same name but different 
  *                         parameters allows for varying arguments when instantiating an
  *                         object.
  *
*/

  return 0;
}