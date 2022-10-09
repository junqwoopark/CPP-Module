#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string const &target);
  RobotomyRequestForm(RobotomyRequestForm const &src);
  ~RobotomyRequestForm();

  RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

  void execute(Bureaucrat const &executor) const;
  Form *create(std::string const &target) const;

private:
  std::string const _target;
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H  \
        */
