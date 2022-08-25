#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook() {}

PhoneBook::PhoneBook(const PhoneBook& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PhoneBook& PhoneBook::operator=(PhoneBook const& rhs) {
    // if ( this != &rhs )
    //{
    // this->_value = rhs.getValue();
    //}
    return *this;
}

std::ostream& operator<<(std::ostream& o, PhoneBook const& i) {
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PhoneBook::print_name(std::string str) {
    if (str.length() <= 10) {
        for (int i = 0; i < 10 - str.length(); i++) {
            std::cout << ' ';
        }
        std::cout << str;
    } else {
        std::cout << str.substr(0, 9) << '.';
    }
}

void PhoneBook::add() {
    Contact tmp;
    std::string s;

    std::getline(std::cin, s);
    tmp.set_first_name(s);
    std::getline(std::cin, s);
    tmp.set_last_name(s);
    std::getline(std::cin, s);
    tmp.set_nickname(s);
    std::getline(std::cin, s);
    tmp.set_phone_number(s);
    std::getline(std::cin, s);
    tmp.set_darkest_secret(s);
    if (tmp.is_valid_contact()) {
        _contacts[_idx] = tmp;
        _idx = (_idx + 1) % 8;
    }
    return;
}
void PhoneBook::search() {
    std::string tmp;

    std::cout << "|     index|first name| last name|  nickname|" << std::endl;
    for (int i = 0; i < 8; i++) {
        if (_contacts[i].is_valid_contact()) {
            std::cout << "|         " << i << '|';
            print_name(_contacts[i].get_first_name());
            std::cout << '|';
            print_name(_contacts[i].get_last_name());
            std::cout << '|';
            print_name(_contacts[i].get_nickname());
            std::cout << '|';
        } else
            std::cout << "|          |          |          |          |";
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
