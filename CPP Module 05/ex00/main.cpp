#include "Bureaucrat.hpp"

int main() {
  std::cout << "-----Test#0 constructor grade too low-----" << std::endl;
  {
    try {
      Bureaucrat b("Bureaucrat", 0);
      std::cout << b;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 constructor grade too high-----" << std::endl;
  {
    try {
      Bureaucrat b("Bureaucrat", 151);
      std::cout << b;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 incrementGrade()-----" << std::endl;
  {
    try {
      Bureaucrat b("Bureaucrat", 10);
      std::cout << b;
      for (int i = 0; i < 10; i++) {
        b.incrementGrade();
        std::cout << b;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 decrementGrade()-----" << std::endl;
  {
    try {
      Bureaucrat b("Bureaucrat", 141);
      std::cout << b;
      for (int i = 0; i < 10; i++) {
        b.decrementGrade();
        std::cout << b;
      }
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;
  return 0;
}
