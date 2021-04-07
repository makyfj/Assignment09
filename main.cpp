#include <iostream>
#include <stdlib.h>
#include <time.h>

void printUnsortedArray(int numbers[]) {

  std::cout << "UNSORTED ARRAY" << std::endl;

  for (int i = 0; i < 25; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;
}

void printSortedArray(int numbers[]) {

  std::cout << "SORTED ARRAY" << std::endl;

  for (int i = 0; i < 25; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;
}
void selectionSort(int numbers[], int numbersSize) {

  printUnsortedArray(numbers);

  std::cout << std::endl;

  int i = 0;
  int j = 0;
  int indexSmallest = 0;

  // Temp variable for swap
  int temp = 0;

  for (; i < numbersSize - 1; i++) {

    // Find index of smallest remaining element
    indexSmallest = i;
    for (j = i + 1; j < numbersSize; ++j) {

      if (numbers[j] < numbers[indexSmallest]) {
        indexSmallest = j;
      }
    }

    // Swap numbers[i] and numbers[indexSmallest]
    temp = numbers[i];
    numbers[i] = numbers[indexSmallest];
    numbers[indexSmallest] = temp;
  }

  printSortedArray(numbers);
}

void insertionSort();

void bubbleSort();

void mergeSort();

void quickSort();

void heapSort();

void menu() {

  int choice;

  // For new numbers
  /* srand(time(0)); */

  int numbers[1000] = {};

  // Populates numbers with random numbers
  for (int i = 0; i < 1000; i++) {
    // Random numbers between 0 and 1000
    numbers[i] = (rand() % 1000 + 1);
  }

  // Get numbers size
  int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

  do {

    std::cout << std::endl;
    std::cout << "Please choose from the following options - \n";
    std::cout << " 1. Selection Sort. \n";
    std::cout << " 2. Insertion Sort. \n";
    std::cout << " 3. Bubble Sort. \n";
    std::cout << " 4. Merge Sort. \n";
    std::cout << " 5. Quick Sort. \n";
    std::cout << " 6. Heap Sort. \n";
    std::cout << " 7. Exit. \n";
    std::cout << "\nEnter Choice:";
    std::cin >> choice;
    std::cout << std::endl;

    if (choice == 1) {

      std::cout << "SELECTION SORT\n";
      selectionSort(numbers, numbersSize);
    }

    else if (choice == 2) {

      std::cout << "INSERTION SORT\n";
    } else if (choice == 3) {

      std::cout << "BUBBLE SORT\n";
    } else if (choice == 4) {

      std::cout << "MERGE SORT\n";
    } else if (choice == 5) {

      std::cout << "QUICK SORT\n";
    } else if (choice == 6) {

      std::cout << "HEAP SORT\n";
    } else if (choice == 7) {
      std::cout << "EXIT" << std::endl;
      std::cout << std::endl;
    } else {
      // Test if the user enter valid choices
      std::cout << "Invalid Choice, Try Again" << std::endl;
      std::cout << std::endl;
    }

  } while (choice != 7);
}

int main() {

  menu();

  // Program time
  /* const clock_t bc = clock(); */
  /* std::cout << float(clock() - bc) / CLOCKS_PER_SEC << "sec"; */

  return 0;
}
