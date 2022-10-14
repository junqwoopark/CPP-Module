#include <cstdio>
#include <ctype.h>
#include <iostream>

template <typename T> void iter(T *arr, int length, void (*f)(T &)) {
  while (length--) {
    f(arr[length]);
  }
}

template <typename T> void print(T &x) { std::cout << x << ' '; }

template <typename T> void addOne(T &x) { x += 1; }
