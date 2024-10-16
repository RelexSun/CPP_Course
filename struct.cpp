#include <iostream>

struct Student {
  std::string name;
  double gpa;
  bool enrolled;
};

struct GPA {
  double gpa;
};

void funcGPA(GPA &g, double gpa) {
  g.gpa = gpa;
}

int main() {
/*
*   struct = A structure that group related varables under one name structs can
*             contain many different data types (string, int, double, bool, etc.)
*             variables in a struct are known as "members" members can be access
*             with. "Class Member Access Operator"
*
*/

  int n;
  std::cout << "Enter how many student: ";
  std::cin >> n;
  Student *s = new Student[n];

  for (int i = 0; i < n; i++) {
    std::cout << "Enter student" << i+1 << "\n";
    std::cout << "Student name: ";
    std::cin >> s[i].name;
  }

  for (int i = 0; i < n; i++) {
    std::cout << "Student name: " << s[i].name << std::endl;
  }

  GPA g;
  g.gpa = 1.0;
  funcGPA(g, 2.5);
  std::cout << g.gpa;

  return 0;
}