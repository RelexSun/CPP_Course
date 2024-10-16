#include <iostream>

int main() {
  /*
  * dynamic memory = Memory that is allocated after the program is already compiled & running.
  *                 Use the 'new' operator to allocate memory in the heap rather than the stack
  * 
  *   Useful when we don't know how much memory we will need. Makes our programs more flexible,
  *         especially when accrepting user input.
  *
  * 
  * A stack is a linear data structure where the last element entered exits first. 
  * 
  * A Heap is a kind of Tree-based Data Structure in which the tree is an entire binary tree. A heap is a data structure or memory that is used to hold global variables. All global variables are kept in heap memory by default. It enables the allocation of dynamic memory. The Processor does not handle heap memory. The heap data structure may be built either using arrays or trees.
  * 
  * 
  * 
  * programming phases: 
  * 1. write code
  * 2. compile code (compile-time): compiler will check for error, syntax, type...
  * 3. run-time (execution): when the program is runing
  * 
  * so, at compile time computer will automatically allocate memory for all the variable or arrays which is called static memory array
  * by using dynamic memory allocation this will allow a variable or array to be dynamically allocated 
  * 
  * 
  */

  int *p_Num = nullptr;

  p_Num = new int;

  *p_Num = 21;

  std::cout << "address: " << p_Num << '\n';
  std::cout << "value: " << *p_Num << '\n';


  delete p_Num; // to avoid memory leak


  char *p_Grades = nullptr;
  int size;
  std::cout << "How many grades to enter in: ";
  std::cin >> size;
  p_Grades = new char[size];

  for(int i = 0; i < size; i++) {
    std::cout << "Enter grade #" << i+1 << ": ";
    std::cin >> p_Grades[i];
  }

  for(int i = 0; i < size; i++) {
    std::cout << p_Grades[i] << " ";
  }
  delete[] p_Grades;

  return 0;
}