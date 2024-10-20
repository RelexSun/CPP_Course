[Video as a reference](https://www.youtube.com/watch?v=27QLVnn74Eg)

# Programming Phases in C++

### 1. Write Code (Source Code)

- This is the phase where the programmer writes code in C++ or another programming language.
- The code contains logic, variable declarations, function definitions, loops, etc.
- At this stage, the focus is on expressing what the program should do, but the code is not yet ready for execution.

### 2. Compile Code (Compile-Time)

- **What happens during compile-time**:
  - The **compiler** translates the source code into machine code (binary) that the CPU can execute.
  - **Syntax Check**: The compiler checks for syntax errors, such as missing semicolons or undeclared variables.
  - **Type Check**: The compiler ensures that data types are used correctly.
  - **Memory Allocation (for static variables/arrays)**: If your program contains static arrays or variables (where sizes are fixed), the compiler allocates memory for them at compile-time. This is called **static memory allocation**.
    - Example:
      ```cpp
      int arr[10];  // Array size is known at compile-time
      ```
    - In this case, the compiler knows `arr` will need memory for 10 integers, so it allocates that memory statically.
  - If there are errors, the compilation will fail, and you must fix them before proceeding.

### 3. Run-Time (Execution)

- **What happens during run-time**:
  - After successful compilation, the program is executed by the CPU during the **run-time phase**.
  - At this point, tasks like reading input, processing data, and interacting with the user occur.
  - **Dynamic Memory Allocation**: If the program uses **dynamic arrays** or variables, memory is allocated during run-time based on program needs or user input.
    - Example:
      ```cpp
      int size;
      std::cin >> size;
      int* arr = new int[size];  // Dynamic memory allocation at run-time
      ```
    - Here, the size of the array `arr` is determined during run-time based on user input.
  - Any errors like segmentation faults (accessing invalid memory) or logical errors can occur during this phase.

---

## Key Concepts

### Static Memory Allocation (Compile-Time)

- Used for variables or arrays whose sizes are known **before the program runs**.
- Memory is allocated during the **compilation phase**.
- Example:

  int arr[10]; // Fixed size array known at compile-time

  ```

  ```

### Dynamic Memory Allocation (Run-Time)

- Used for variables or arrays whose sizes are determined while the program is running.
- Memory is allocated during the run-time phase and can change based on user input or program logic.
  ```cpp
  int* arr = new int[size];  // Dynamic memory allocation at run-time
  ```

### Why Use Dynamic Memory?

- **Flexibility**: Allows the program to allocate exactly the amount of memory needed, depending on the situation or user input.

- **Avoiding Wasted Memory**: Static arrays require a fixed size, which can waste memory or cause issues if the size is too small. Dynamic memory lets you adjust as needed.
