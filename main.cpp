#include <iostream>
#include <time.h>
#include <vector>

void menu() {

  int choice;

  do {

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

void selectionSort();

void insertionSort();

void bubbleSort();

void mergeSort();

void quickSort();

void heapSort();

int main() {

  menu();

  // Program time
  /* const clock_t bc = clock(); */
  /* std::cout << float(clock() - bc) / CLOCKS_PER_SEC << "sec"; */

  return 0;
}
