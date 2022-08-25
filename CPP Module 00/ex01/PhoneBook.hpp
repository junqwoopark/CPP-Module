#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

#include "Contact.hpp"

class PhoneBook {
   public:
    PhoneBook();
    PhoneBook(PhoneBook const& src);
    ~PhoneBook();

    PhoneBook& operator=(PhoneBook const& rhs);

   private:
    int _idx = 0;
    Contact _contacts[8];

   public:
    void print_name(std::string str);
    void add();
    void search();
};

std::ostream& operator<<(std::ostream& o, PhoneBook const& i);

#endif /* ***************************************************** PHONEBOOK_H */
