#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  std::cout << "-----Test#0 Form constructor grade too high-----" << std::endl;
  {
    try {
      Form form = Form("form", 0, 0);
      std::cout << form;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#1 Form constructor grade too low-----" << std::endl;
  {
    try {
      Form form = Form("form", 151, 151);
      std::cout << form;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#2 signForm(): throw exception-----" << std::endl;
  {
    try {
      Form form = Form("form", 1, 100);
      Bureaucrat b("Bureaucrat", 50);
      std::cout << form;
      b.signForm(form);
      std::cout << form;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;

  std::cout << "-----Test#3 signForm(): no exception-----" << std::endl;
  {
    try {
      Bureaucrat b("Bureaucrat", 1);
      Form form = Form("form", 1, 100);
      std::cout << form;
      b.signForm(form);
      std::cout << form;
    } catch (std::exception &e) {
      std::cout << e.what() << std::endl;
    }
  }
  std::cout << std::endl;
  return 0;
}
