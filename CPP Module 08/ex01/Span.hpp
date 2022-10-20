#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Span {

public:
  Span();
  Span(unsigned int n);
  Span(Span const &src);
  ~Span();

  Span &operator=(Span const &rhs);

  void addNumber(int number);
  unsigned int shortestSpan();
  unsigned int longestSpan();
  template <typename T> void addRange(T begin, T end) {
    while (begin != end) {
      if (!_n)
        throw std::runtime_error("N elements are already stored!");
      _n--;
      _v.push_back(*begin);
      begin++;
    }
  }

private:
  unsigned int _n;
  std::vector<int> _v;
};

std::ostream &operator<<(std::ostream &o, Span const &i);

#endif /* ************************************************************ SPAN_H  \
        */
