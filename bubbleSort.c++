#include <iostream>

void swap(int& a, int& b) {
  int temp  = a;
  a = b;
  b = temp;
}

void sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1; j++) {
      if (array[j] > array[j+1]) {
        swap(array[j], array[j+1]);
      }
    }
  }
}

int main() {
  int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int size = sizeof(array)/sizeof(array[0]);
  sort(array, size);
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << " ";
  }
  return 0;
}