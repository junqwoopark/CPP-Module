#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <exception>
#include <iostream>
#include <string>

#include "Form.hpp"

class Bureaucrat {
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };

public:
  Bureaucrat();
  Bureaucrat(std::string const &name, int grade);
  Bureaucrat(Bureaucrat const &src);
  ~Bureaucrat();

  Bureaucrat &operator=(Bureaucrat const &rhs);

  void incrementGrade();
  void decrementGrade();
  void signForm(Form &form);

  std::string const &getName() const;
  int getGrade() const;
  void executeForm(Form const &form);

private:
  std::string const _name;
  int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H  \
        */
