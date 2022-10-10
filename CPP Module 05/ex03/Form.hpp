#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
public:
  Form();
  Form(std::string const &name, int gradeToSign, int gradeToExecute);
  Form(Form const &src);
  virtual ~Form();

  class GradeTooHighException : public std::exception {
  public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    const char *what() const throw();
  };

  class FormNotSignedException : public std::exception {
  public:
    const char *what() const throw();
  };

  Form &operator=(Form const &rhs);

  void beSigned(Bureaucrat &bureaucrat);
  virtual void execute(Bureaucrat const &executor) const = 0;

  std::string const &getName() const;
  bool const &getSigned() const;
  int const &getGradeToSign() const;
  int const &getGradeToExecute() const;

protected:
  std::string const _name;
  bool _signed;
  int const _gradeToSign;
  int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif /* ************************************************************ FORM_H  \
        */
