#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };

public:
  Form();
  Form(std::string const &name, int gradeToSign, int gradeToExecute);
  Form(Form const &src);
  ~Form();

  Form &operator=(Form const &rhs);

  void beSigned(Bureaucrat &bureaucrat);

  std::string const &getName() const;
  bool getSigned() const;
  int getGradeToSign() const;
  int getGradeToExecute() const;

private:
  std::string const _name;
  bool _signed;
  int const _gradeToSign;
  int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif /* ************************************************************ FORM_H  \
        */
