#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("target") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
    : Form(src), _target(src._target) {
  *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
  if (this != &rhs) {
    _signed = rhs._signed;
  }
  return *this;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i) {
  o << i.getName() << ", form grade to sign " << i.getGradeToSign()
    << ", form grade to execute " << i.getGradeToExecute() << ", form signed "
    << i.getSigned() << std::endl;
  return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (executor.getGrade() > getGradeToExecute())
    throw Form::GradeTooLowException();
  else if (getSigned() == false)
    throw Form::FormNotSignedException();
  else {
    std::ofstream file;
    file.open(_target + "_shrubbery");
    file << "         v" << std::endl;
    file << "        >X<" << std::endl;
    file << "         A" << std::endl;
    file << "        d$b" << std::endl;
    file << "       d$$b" << std::endl;
    file << "      d$$$b" << std::endl;
    file << "     d$$$$$" << std::endl;
    file << "    d$$$$$$$" << std::endl;
    file << "   d$$$$$$$$" << std::endl;
    file << "  d$$$$$$$$$" << std::endl;
    file << " d$$$$$$$$$$$" << std::endl;
    file << "d$$$$$$$$$$$$" << std::endl;
    file << "      ###" << std::endl;
    file << "      ###" << std::endl;
    file << "      ###" << std::endl;
    file.close();
  }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
