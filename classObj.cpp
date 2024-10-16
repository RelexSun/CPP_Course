#include <iostream>

class Human {
  public:
  // alttribute
    std::string name;
    std::string occupation;
    int age;

    // methods
    void eat() {
      std::cout << "This person is eating\n";
    }
    void drink() {
      std::cout << "This person is drinking\n";
    }
    void sleep() {
      std::cout << "This person is sleeping\n";
    }
};

int main() {
  /*
  *   object = A collection of attributes and methods They can have characteristics 
  *             and could perform actions 
  *         Can be used to mimic real world items (ex: Phone, Book, Dog)
  *         Create from a class which acts as a "blue-print"
  *
  */
  Human h1;

  h1.name = "Sun";
  h1.occupation = "dek";
  h1.age = 20;

  std::cout << h1.name << std::endl;
  std::cout << h1.occupation << std::endl;
  std::cout << h1.age << std::endl;

  h1.eat();
  h1.drink();
  h1.sleep();

  return 0;
}