#include <iostream>

int main() {

  std::string students[] = {"GOJO", "Naruto", "Sun"};

// for every student in students
  for (std::string student : students) { 
    std::cout << student << "\n";
  }

  return 0;
}