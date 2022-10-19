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

private:
  unsigned int _n;
  std::vector<int> _v;
};

std::ostream &operator<<(std::ostream &o, Span const &i);

#endif /* ************************************************************ SPAN_H  \
        */
