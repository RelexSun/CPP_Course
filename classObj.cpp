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

class Person {
  protected: 
    std::string first;
    std::string last;

  public:
  // constructor initiallization list
  Person(std::string first, std::string last): first(first), last(last) {}
  /*
  the same as the top
  Person(std::string first, std::string last) {
    this->first = first;
    this->last = last;
  }*/

  Person() = default; // Person() = {} make passing data optional
  
    void setFirstName(std::string first) { // mutators or setter
      this->first = first;
    }

    void setLastName(std::string last) { // mutators or setter
      this->last = last;
    }

   std::string getName() { // only get full name
      // std::cout << first + " " + last << std::endl; 
      return first +" "+ last;
    }

    void printFullName() { // interface - the way you work with class
      std::cout << first << " " << last << std::endl;
    }

    virtual void printInfo() {
      std::cout << "first name: " << first << std::endl;
      std::cout << "name: " << getName() << std::endl;
    }

};

// if no public key word when inheriting everything that is public in the parent class will become private
class Empoyee: public Person { // class inheritance
  std::string department;
  public:
    Empoyee(std::string first, std::string last, std::string department): Person(first, last), department(department) {}
    Empoyee() = default;

    std::string getDepartment() {
      return department;
    }

    void setDepartment(std::string department) {
      this->department = department;
    }

    void printInfo() override {
      std::cout << "first name: " << first << std::endl;
      std::cout << "name: " << getName() << std::endl;
      std::cout << "department: " <<department << std::endl;
    }
};

int main() {

  std::vector<Person*> people;
  Person p("Sun", "Cuteeee");
  p.printInfo();
  Empoyee e("lol", "hehe", "IT");
  e.printInfo();

  people.push_back(&p);
  people.push_back(&e);

  for(auto person : people) {
    person->printInfo();
  }

  /*
  *   object = A collection of attributes and methods They can have characteristics 
  *             and could perform actions 
  *         Can be used to mimic real world items (ex: Phone, Book, Dog)
  *         Create from a class which acts as a "blue-print"
  *
  *     class - describes the structure
  *     object - a specific example of that structure (instance)
  *     instance - another name for object
  *     instantiating - creating an object from a class
  *     data members - variables
  *     methods - functions
  *     Parent class (base class) - inherited FROM
  *     Child class (derived class) - does the inheriting
  *     Overriding - override method in the base class with the same name and keyword of virtual
  *
  *     abstractions - a concept where you make something easy by hiding the 
  *                     complicated stuff.
  *     encapsulation - granting access to private data only through controlled public
  *                       interfaces (the way you work with the class).
  *     inheritance - we can create derived classes that inherit properties from their
  *                    parent classes.
  *     polymorphism - we can treat multiple different objects as their base object type.
  *     
  *     access modifier_________base class_________inheritance_________outside class______
  *     -----------------|--------------------|-------------------|--------------------|  
  *       private        |       yes          |       no          |          no
  *     -----------------|--------------------|-------------------|--------------------|  
  *       protected      |       yes          |       yes         |          no
  *     -----------------|--------------------|-------------------|--------------------|  
  *       public         |       yes          |       yes         |          yes
  *
  *
  */

  /*
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
 
  */




  return 0;
}