#include <iostream> 

int main() {
  /*
    pointers: variable that stores a memory address of another variable sometimes it's easier to work with an address

  & address-of operator 
  * dereference operator

  */

  std::string name = "Sun";
  int age = 21;
  std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

  std::string *p_Name = &name;
  int *p_Age = &age;

  // TODO: array variable is already an address
  std::string *p_FreePizzas = freePizzas; 

  std::cout << p_Name;
  std::cout << *p_Age;

  return 0;
}