#include <iostream>

int main() {

  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  if(name.length() > 12){ // length of string
    std::cout << "Your name can't be over 12 character\n";
  } else {
    std::cout << "Welcome " << name << "\n";
  }

  name.length() > 12 ? std::cout << "\nYour name can't be over 12 character\n" : std::cout << "Welcome " << name << "\n";

  std::cout << (name.length() > 12 ? "Your name can't be over 12 character\n" : "Welcome\n");

  if(name.empty()) { // will return boolean value
    std::cout << "You didn't enter your name\n";
  }

  name.clear();
  std::cout << "Hello\n" << name;

  name = "Sun";
  name.append("@gmail.com");
  std::cout << "Your username is now " << name;

  std::cout << name.at(0); // takes a parameter as an index and return the value of the index

  name.insert(0, "@"); // insert to the beginning of the string without overwriting 

  name.find('s'); // will return an index position of the char if exist

  name.erase(0, 3); // erase from the beginning to the 3rd index (start, end) not inclusive

  return 0;
}