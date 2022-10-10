#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5), _target("target") {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &src)
    : Form(src), _target(src._target) {
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {
  if (this != &rhs) {
    _signed = rhs._signed;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i) {
  o << i.getName() << ", form grade to sign " << i.getGradeToSign()
    << ", form grade to execute " << i.getGradeToExecute() << std::endl;
  return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() > getGradeToExecute())
    throw Form::GradeTooLowException();
  else if (getSigned() == false)
    throw Form::FormNotSignedException();
  else
    std::cout << _target << " has been pardoned by Zafod Beeblebrox."
              << std::endl;
}

/*
** --------------------------------- ACCESSOR
*---------------------------------
*/

/* **************************************************************************
 */
