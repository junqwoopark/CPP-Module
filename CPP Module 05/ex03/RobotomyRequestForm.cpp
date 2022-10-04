#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : Form() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
    : Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : Form(src) {
    *this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(
    RobotomyRequestForm const& rhs) {
    if (this != &rhs) {
        _signed = rhs._signed;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm const& i) {
    o << i.getName() << ", form grade to sign " << i.getGradeToSign()
      << ", form grade to execute " << i.getGradeToExecute() << std::endl;
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
    if (getSigned() == false)
        throw Form::FormNotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    else {
        std::srand(time(NULL));
        if (std::rand() % 2 == 0)
            std::cout << _target << " has been robotomized successfully"
                      << std::endl;
        else
            std::cout << _target << " robotomization failed" << std::endl;
    }
}

Form* RobotomyRequestForm::create(std::string const& target) const {
    return new RobotomyRequestForm(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */