#include "Data.hpp"
#include <climits>
#include <cmath>
#include <cstdint>
#include <float.h>
#include <iostream>
#include <string>

uintptr_t serialize(Data *ptr) {
  uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
  return ret;
}

Data *deserialize(uintptr_t raw) {
  Data *ret = reinterpret_cast<Data *>(raw);
  return ret;
}

int main() {
  Data data;

  uintptr_t raw = serialize(&data);
  std::cout << raw << std::endl;
  Data *ptr = deserialize(raw);
  std::cout << (ptr == &data) << std::endl;
}
