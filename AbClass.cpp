#include <iostream>

class Stove {
  private:
    int temperature = 0;
  public:
    Stove(int temperature) {
      setTemp(temperature);
    }
    int getTemp() { // getter
      return temperature;
    }
    void setTemp(int temp) {
      temp < 0 ? this->temperature = 0 : this->temperature = temp;

      // temperature = temp;
    }
};

int main() {
/*
*   Abstraction = hiding unnecessary data from outside a class
*   getter = function that makes a private attribute READABLE
*   setter = function that makes a private WRITEABLE
*
*/
  Stove stove(0);
  stove.setTemp(100000);

  std::cout << stove.getTemp();


  return 0;
}