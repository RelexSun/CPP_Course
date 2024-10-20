# Pass by Value vs Pass by Reference vs Pass by Pointer

This is a documentation about difference between passing by value, passing by reference, passing by pointer.

<hr>

## Pass by Value

When passing by value, a copy of the actual argument is made, and this copy is passed to the function. Any changes made to the parameter inside the function do not affect the original argument.

```cpp
  void foo(int a) {
    a = 10; // This changes the copy of the argument, not the original
}

int main() {
    int x = 5;
    foo(x);
    std::cout << x; // Output: 5
    return 0;
}
```

- **Key Points**

  - **Memory:** A separate copy of the data is created.
  - **Performance:** A separate copy of the data is created.
  - **Safety:** A separate copy of the data is created.

- **Use Cases**

  - Use pass by value when the function does not need to modify the original data.
  - It's suitable for small data types (e.g., `int`, `char`).

  <hr>

## Pass by Reference

When passing by reference, the function receives a **reference** to the original argument. Changes made to the parameter directly affect the original variable.

```cpp
  void foo(int &a) {
    a = 10; // This changes the original argument
}

int main() {
    int x = 5;
    foo(x);
    std::cout << x; // Output: 10
    return 0;
}
```

- **Key Points**:

  - **Memory**: No copy is made; the function operates directly on the original variable.
  - **Performance**: More efficient for large objects, as no copying is involved.
  - **Mutability**: The original data can be modified by the function.

- **Use Cases**:
  - Use pass by reference when the function needs to modify the original argument.
  - It's efficient for passing large objects like arrays,`std::vector`, or `std::string`.

**Special Case: `const` References**
if you want to pass by reference without allowing the function to modify the data, you can use a `const` reference.

```cpp
void foo(const int &a) {
    // a = 10; // Error: cannot modify a const reference
}
```

This is useful when you want to avoid copying large objects while still protecting the original data from modification.

<hr>

## Pass by Pointer

When passing by pointer, a **pointer** (the memory address) to the original argument is passes to the function. The function can modify the data by dereferencing the pointer.

```cpp
void foo(int *a) {
    *a = 10; // Dereference the pointer to modify the original variable
}

int main() {
    int x = 5;
    foo(&x); // Pass the address of x
    std::cout << x; // Output: 10
    return 0;
}
```

- **Key Points**:

  - **Memory**: No copy is made, but the function operates on the original data via its pointer.
  - **Performance**: Similar to pass by reference, but pointers are more flexible (e.g., they can be `nullptr`).
  - **Mutability**: The original data can be modified.

- **Use Cases\_**

  - Use pass by pointer when you need to modify the original variable, and null pointers or dynamic memory management are involved.
  - It's useful in cases where the argument may be `nullptr`, or when working with dynamic memory allocation (e.g., `new`).

  **Null Pointers**:
  Unlike pass by reference, pointers can be `nullptr`, allowing for the possibility of no valid data being passed:

  ```cpp
  void foo(int *a) {
    if (a != nullptr) {
        *a = 10;
    }
  }
  ```

  | Method            | Copies Data | Can Modify Original | Common Use Cases                           |
  | ----------------- | ----------- | ------------------- | ------------------------------------------ |
  | pass by Value     | Yes         | No                  | Simple types, no need to modify original   |
  | Pass by Reference | No          | Yes                 | Large objects, need to modify original     |
  | Pass by Pointer   | No          | Yes                 | Dynamic memory, null pointer possibilities |

## Conclusion

- **Pass by Value** is simple and safe when you don't want to modify the original argument, but it can be inefficient for large objects due to copying.
- **Pass by Reference** is efficient and allows the function to modify the original argument, but there's no way to pass a `null reference`.
- **Pass by Pointer** is flexible, allowing for modifications and null pointers, but you need to manage memory and pointer safety (e.g., check for `nullptr`).
  Each method has its place, and understanding when to use each is crucial to writing efficient and robust C++ code.
