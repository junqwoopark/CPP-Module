#include "Span.hpp"
#include <climits>
#include <exception>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _n(0), _v() {}

Span::Span(unsigned int n) : _n(n), _v() {}

Span::Span(const Span &src) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=(Span const &rhs) {
  if (this != &rhs) {
    _n = rhs._n;
    _v = rhs._v;
  }
  return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number) {
  if (!_n)
    throw "N elements are already stored!";
  _n--;
  _v.push_back(number);
}

unsigned int Span::shortestSpan() {
  unsigned int ret = UINT_MAX;

  if (_v.size() < 2)
    throw "No span can be found!";
  std::sort(_v.begin(), _v.end());
  for (unsigned int i = 0; i + 1 < _v.size(); i++) {
    ret = std::min(ret, (unsigned int)_v[i + 1] - _v[i]);
  }
  return ret;
}

unsigned int Span::longestSpan() {
  unsigned int ret;

  if (_v.size() < 2)
    throw "No span can be found!";
  std::sort(_v.begin(), _v.end());
  ret = _v[_v.size() - 1] - _v[0];
  return ret;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* **************************************************************************
 */
