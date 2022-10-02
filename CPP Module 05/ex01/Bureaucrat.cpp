#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() { _grade = 150; }

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name) {
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs) {
    if (this != &rhs) {
        _grade = rhs._grade;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& i) {
    o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

void Bureaucrat::incrementGrade() {
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade++;
}

void Bureaucrat::signForm(Form& form) {
    try {
        form.beSigned(*this);
        std::cout << _name << " signs " << form.getName() << std::endl;
    } catch (std::exception& e) {
        std::cout << _name << " cannot sign " << form.getName() << " because "
                  << e.what() << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const& Bureaucrat::getName() const { return _name; }
int Bureaucrat::getGrade() const { return _grade; }

/* ************************************************************************** */
