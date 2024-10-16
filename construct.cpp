#include <iostream>

class Student {
  public: 
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa) {
      this->name = name;
      this->age = age;
      this->gpa = gpa;
    }

    void displayStudent() {
      std::cout << "Name: " << name;
    }
};

int main() {
/*
*   constructor = special method that is automatically called when an object is 
*                 instantiated useful for assigning values to attributes as arguments
*
*/

  Student s1("Sun", 20, 4.0);
  s1.displayStudent();

  return 0;
}