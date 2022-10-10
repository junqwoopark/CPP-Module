#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <atomic>
#include <cstring>
#include <iostream>
#include <string>
template <typename T> class Array {

public:
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
    std::memcpy(_arr, src._arr, sizeof(_arr));
  };
  ~Array();

  T &operator[](int idx) {
    if (!(0 <= idx && idx < _n)) {
      throw std::exception();
    } else {
      return _arr[idx];
    }
  }

  Array &operator=(Array const &rhs) {
    if (this != &rhs) {
      delete _arr;
      _n = rhs._n;
      _arr = new T[_n];
      std::memcpy(_arr, rhs._arr, sizeof(_arr));
    }
  };

  unsigned int size() { return _n; }

private:
  unsigned int _n;
  T *_arr;
};

#endif /* *********************************************************** ARRAY_H  \
        */
