#include "Array.hpp"

int main(void) {
  std::cout << "-----Test#0 : Create Array<int>-----" << std::endl;
  {
    Array<int> arr(5);
    for (int i = 0; i < 5; i++) {
      arr[i] = i;
    }
    for (int i = 0; i < 5; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
  }

  std::cout << "-----Test#1 : Create Array<char>-----" << std::endl;
  {
    Array<char> arr(5);
    for (int i = 0; i < 5; i++) {
      arr[i] = 'a' + i;
    }
    for (int i = 0; i < 5; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
  }

  std::cout << "-----Test#2 : Copy constructor-----" << std::endl;
  {
    Array<int> arr(5);
    for (int i = 0; i < 5; i++) {
      arr[i] = i;
    }

    Array<int> arr2(arr);
    for (int i = 0; i < 5; i++) {
      arr2[i] = i + 10;
    }

    std::cout << "arr: ";
    for (int i = 0; i < 5; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << "arr2: ";
    for (int i = 0; i < 5; i++) {
      std::cout << arr2[i] << ' ';
    }
    std::cout << std::endl;
  }

  std::cout << "-----Test#3 : Assignation operator-----" << std::endl;
  {
    Array<int> arr(5);
    for (int i = 0; i < 5; i++) {
      arr[i] = i;
    }

    Array<int> arr2(5);
    for (int i = 0; i < 5; i++) {
      arr2[i] = i + 10;
    }

    arr2 = arr;
    for (int i = 0; i < 5; i++) {
      arr2[i] = i + 10;
    }

    std::cout << "arr: ";
    for (int i = 0; i < 5; i++) {
      std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;

    std::cout << "arr2: ";
    for (int i = 0; i < 5; i++) {
      std::cout << arr2[i] << ' ';
    }
    std::cout << std::endl;
  }
  std::cout << "-----Test#4 : Out of range-----" << std::endl;
  {
    Array<int> arr(5);
    for (int i = 0; i < 5; i++) {
      arr[i] = i;
    }

    try {
      std::cout << arr[5] << std::endl;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  return 0;
}
