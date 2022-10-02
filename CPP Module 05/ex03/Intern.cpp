#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern() {}

Intern::Intern(const Intern& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern& Intern::operator=(Intern const& rhs) {
    if (this != &rhs) {
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form* Intern::makeForm(std::string const& formName, std::string const& target) {
    Form* form = NULL;
    std::string formNames[3] = {"presidential pardon", "robotomy request",
                                "shrubbery creation"};
    Form* forms[3] = {
        new PresidentialPardonForm(target),
        new RobotomyRequestForm(target),
        new ShrubberyCreationForm(target),
    };

    int i;
    for (i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            form = forms[i];
            break;
        }
    }
    for (int j = 0; j < 3; j++) {
        if (j != i) delete forms[j];
    }
    if (form != NULL) {
        std::cout << "Intern creates " << formName << std::endl;
    } else {
        std::cout << "Intern can't create " << formName << std::endl;
    }
    return form;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
