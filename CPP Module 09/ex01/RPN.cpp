#include "RPN.hpp"

#include <stack>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &src) {
  *this = src;
  return;
}

RPN &RPN::operator=(RPN const &rhs) {
  if (this != &rhs) {
  }
  return *this;
}

int RPN::calculate(std::string &str) {
  int a, b;
  std::stack<int> st;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ')
      continue;
    else if (std::isdigit(str[i]))
      st.push(str[i] - '0');
    else if (isOperator(str[i])) {
      if (st.size() < 2) throw std::invalid_argument("Invalid argument");
      b = st.top();
      st.pop();
      a = st.top();
      st.pop();
      if (str[i] == '+') st.push(a + b);
      if (str[i] == '-') st.push(a - b);
      if (str[i] == '*') st.push(a * b);
      if (str[i] == '/') st.push(a / b);
    } else
      throw std::invalid_argument("Invalid argument");
  }

  if (st.size() != 1) throw std::invalid_argument("Invalid argument");
  return st.top();
}

bool RPN::isOperator(char c) {
  return (c == '+' || c == '-' || c == '*' || c == '/');
}
