#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

#include "Contact.hpp"

class PhoneBook {
   public:
    PhoneBook();
    ~PhoneBook();

   private:
    int _idx;
    Contact _contacts[8];
    void print_name(std::string str);
    void readline(std::string message, std::string& s);

   public:
    void add();
    void search();
};

std::ostream& operator<<(std::ostream& o, PhoneBook const& i);

#endif /* ***************************************************** PHONEBOOK_H */
