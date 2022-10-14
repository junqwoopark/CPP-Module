#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <atomic>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>

template <typename T> class Array {

public:
  // Constructors
  Array() {
    _n = 0;
    _arr = new T[_n];
  };

  Array(unsigned int n) {
    _n = n;
    _arr = new T[n];
  };

  Array(Array const &src) {
    _n = src._n;
    _arr = new T[_n];
    std::memcpy(_arr, src._arr, _n * sizeof(T));
  };

  // Destructor
  ~Array() { delete[] _arr; };

  // Operators
  T &operator[](unsigned int idx) {
    if (!(0 <= idx && idx < _n)) {
      throw std::out_of_range("Array index out of range");
    } else {
      return _arr[idx];
    }
  }

  Array &operator=(Array const &rhs) {
    if (this != &rhs) {
      delete _arr;
      _n = rhs._n;
      _arr = new T[_n];
      std::memcpy(_arr, rhs._arr, _n * sizeof(T));
    }
    return *this;
  };

  // Methods
  unsigned int size() { return _n; }

private:
  T *_arr;
  unsigned int _n;
};

#endif /* *********************************************************** ARRAY_H  \
        */
