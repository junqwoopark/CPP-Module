#include "Form.hpp"

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form()
    : _name("Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string const& name, int gradeToSign, int gradeToExecute)
    : _name(name),
      _signed(false),
      _gradeToSign(gradeToSign),
      _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    else if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& src)
    : _name(src._name),
      _signed(src._signed),
      _gradeToSign(src._gradeToSign),
      _gradeToExecute(src._gradeToExecute) {
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form& Form::operator=(Form const& rhs) {
    if (this != &rhs) {
        _signed = rhs._signed;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Form const& i) {
    o << i.getName() << ", form grade to sign " << i.getGradeToSign()
      << ", form grade to execute " << i.getGradeToExecute() << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

void Form::beSigned(Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    else
        _signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const& Form::getName() const { return _name; }
bool Form::getSigned() const { return _signed; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExecute() const { return _gradeToExecute; }

/* ************************************************************************** */
