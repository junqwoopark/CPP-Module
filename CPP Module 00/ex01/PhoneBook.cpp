#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook() { _idx = 0; }

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

    std::cout << "first_name: ";
    if (!std::getline(std::cin, s)) return;
    tmp.set_first_name(s);
    std::cout << "last_name: ";
    if (!std::getline(std::cin, s)) return;
    tmp.set_last_name(s);
    std::cout << "nickname: ";
    if (!std::getline(std::cin, s)) return;
    tmp.set_nickname(s);
    std::cout << "phone_number: ";
    if (!std::getline(std::cin, s)) return;
    tmp.set_phone_number(s);
    std::cout << "darkest_secret: ";
    if (!std::getline(std::cin, s)) return;
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
        std::cout << std::endl;
    }
    std::getline(std::cin, tmp);
    if (tmp.length() == 1 && '0' <= tmp[0] && tmp[0] <= '8' &&
        _contacts[tmp[0] - '0'].is_valid_contact()) {
        std::cout << "first_name: " << _contacts[tmp[0] - '0'].get_first_name()
                  << std::endl;
    }
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
