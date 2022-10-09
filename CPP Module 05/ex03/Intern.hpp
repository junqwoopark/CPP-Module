#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
  Intern();
  Intern(Intern const &src);
  ~Intern();

  Intern &operator=(Intern const &rhs);

  Form *makeForm(std::string const &formName, std::string const &target);

private:
};

std::ostream &operator<<(std::ostream &o, Intern const &i);

#endif /* ********************************************************** INTERN_H  \
        */
