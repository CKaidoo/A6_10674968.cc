#include <iostream>

void NanaArray(int *array, int kay) {
  for (int x = 0; x < kay; ++x)
    std::cout << array[x] << " " << std::flush;
  std::cout << std::endl;
}

void BubbleSort(int *array, int kay) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int x = 0; x < kay - j; ++x) {
      if (array[x] > array[x + 1]) {
        temp = array[x];
        array[x] = array[x + 1];
        array[x + 1] = temp;
        swapped = true;
      }
    }
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int kay = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Bubble Sort :" << std::endl;
  NanaArray(array, kay);

  BubbleSort(array, kay);

  std::cout << "After Bubble Sort :" << std::endl;
  NanaArray(array, kay);
  return (0);
}
