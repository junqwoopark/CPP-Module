#include <ctype.h>

template <typename T> void iter(T *arr, size_t len, void (*f)(const T &)) {
  while (len--) {
    f(arr[len]);
  }
}
