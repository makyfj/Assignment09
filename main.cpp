#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <time.h>

void performaceTime() {
  // Performance time
  const clock_t bc = clock();
  std::cout << "\nPerformance time:" << std::endl;
  std::cout << float(clock() - bc) / CLOCKS_PER_SEC << " seconds\n";
}

void printUnsortedArray(int numbers[]) {

  std::cout << "UNSORTED ARRAY:" << std::endl;

  for (int i = 0; i < 50; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;
}

void printSortedArray(int numbers[]) {

  std::cout << "SORTED ARRAY:" << std::endl;

  for (int i = 0; i < 50; i++) {
    std::cout << numbers[i] << " ";
  }
  std::cout << std::endl;
}

// Shuffles the array
void random_shuffle(int numbers[], int numbersSize) {

  int temp;
  srand(time(NULL));

  for (int i = numbersSize - 1; i > 0; i--) {

    // Pick a random index
    int j = rand() % (i + 1);

    // Swap numbers[i] with a random array position
    temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
  }
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

  performaceTime();
}

void insertionSort(int numbers[], int numbersSize) {

  printUnsortedArray(numbers);

  std::cout << std::endl;

  int i = 0;
  int temp = 0;
  int j = 0;

  for (i = 1; i < numbersSize; i++) {
    j = i;
    // Insert numbers[i] into sorted part
    // stopping once numbers[i] in correct position
    while (j > 0 && numbers[j] < numbers[j - 1]) {

      // Swap numbers
      temp = numbers[j];
      numbers[j] = numbers[j - 1];
      numbers[j - 1] = temp;
      --j;
    }
  }
  printSortedArray(numbers);

  performaceTime();
}

void bubbleSort(int numbers[], int numbersSize) {

  printUnsortedArray(numbers);

  std::cout << std::endl;

  int temp;

  for (int i = 0; i < numbersSize; i++) {

    for (int j = 0; j < numbersSize - i - 1; j++) {

      if (numbers[j] > numbers[j + 1]) {

        temp = numbers[i];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = temp;
      }
    }
  }

  printSortedArray(numbers);

  performaceTime();
}

void mergeSort();

void quickSort();

void heapSort();

void menu() {

  int choice;

  // For new numbers
  srand(time(0));

  int numbers[1000] = {};

  // Populates numbers with random numbers
  for (int i = 0; i < 1000; i++) {
    // Random numbers between 0 and 1000
    numbers[i] = (rand() % 1000 + 1);
  }

  // Get numbers array size
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
      std::cout << "--------------\n";
      selectionSort(numbers, numbersSize);
      random_shuffle(numbers, numbersSize);
    }

    else if (choice == 2) {

      std::cout << "INSERTION SORT\n";
      std::cout << "--------------\n";
      std::cout << std::endl;

      insertionSort(numbers, numbersSize);
      random_shuffle(numbers, numbersSize);

    } else if (choice == 3) {

      std::cout << "BUBBLE SORT\n";
      std::cout << "-----------\n";
      std::cout << std::endl;

      bubbleSort(numbers, numbersSize);
      random_shuffle(numbers, numbersSize);

    } else if (choice == 4) {

      std::cout << "MERGE SORT\n";
      std::cout << "----------\n";
      std::cout << std::endl;

    } else if (choice == 5) {

      std::cout << "QUICK SORT\n";
      std::cout << "----------\n";
      std::cout << std::endl;

    } else if (choice == 6) {

      std::cout << "HEAP SORT\n";
      std::cout << "---------\n";
      std::cout << std::endl;

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

  return 0;
}
