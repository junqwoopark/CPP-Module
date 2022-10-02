#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
   public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string const& target);
    ShrubberyCreationForm(ShrubberyCreationForm const& src);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

    void execute(Bureaucrat const& executor) const;

   private:
    std::string const _target;
};

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const& i);

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H \
        */
