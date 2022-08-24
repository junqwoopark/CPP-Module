#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>

class PhoneBook {
   public:
    PhoneBook();
    PhoneBook(PhoneBook const& src);
    ~PhoneBook();

    PhoneBook& operator=(PhoneBook const& rhs);

   private:
};

std::ostream& operator<<(std::ostream& o, PhoneBook const& i);

#endif /* ***************************************************** PHONEBOOK_H */
