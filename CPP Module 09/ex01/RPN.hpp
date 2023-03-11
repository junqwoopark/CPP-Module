#pragma once

#include <string>

class RPN {
 public:
  RPN();
  ~RPN();
  RPN(RPN const &src);
  RPN &operator=(RPN const &rhs);

  int calculate(std::string &str);

 private:
  bool isOperator(char c);
};
