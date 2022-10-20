#include "Span.hpp"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <vector>

int main() {
  std::cout << "-----Test#0 : addNumber()-----" << std::endl;
  {
    Span sp(5);

    try {
      sp.addNumber(5);
      sp.addNumber(3);
      sp.addNumber(17);
      sp.addNumber(9);
      sp.addNumber(11);
      sp.addNumber(100);
    } catch (std::exception &e) {
      std::cout << "ERROR: " << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 : shortestSpan()-----" << std::endl;
  {
    Span sp(5);

    try {
      sp.addNumber(5);
      sp.shortestSpan();
    } catch (std::exception &e) {
      std::cout << "ERROR: " << e.what() << std::endl;
    }
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 : longestSpan()-----" << std::endl;
  {
    Span sp(5);

    try {
      sp.addNumber(5);
      sp.longestSpan();
    } catch (std::exception &e) {
      std::cout << "ERROR: " << e.what() << std::endl;
    }
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.longestSpan() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 : n = 10000-----" << std::endl;
  {
    Span sp(10000);

    for (long i = 0; i < 10000; i++) {
      srand(std::time(NULL) * i + i);
      sp.addNumber(rand());
    }
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
  }
  std::cout << std::endl;

  std::cout << "-----Test#4 : addRange()-----" << std::endl;
  {
    Span sp(5);
    std::vector<int> v;

    for (int i = 0; i < 5; i++) {
      v.push_back(i);
    }
    try {
      sp.addRange(v.begin(), v.end());
    } catch (std::exception &e) {
      std::cout << "ERROR: " << e.what() << std::endl;
    }
  }
  std::cout << std::endl;
}
