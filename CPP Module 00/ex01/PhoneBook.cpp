#include "PhoneBook.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PhoneBook::PhoneBook() { _idx = 0; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PhoneBook::~PhoneBook() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void PhoneBook::print_name(std::string str) {
    if (str.length() <= 10) {
        for (size_t i = 0; i < 10 - str.length(); i++) {
            std::cout << ' ';
        }
        std::cout << str;
    } else {
        std::cout << str.substr(0, 9) << '.';
    }
}

void PhoneBook::readline(std::string message, std::string &s) {
	if (std::cin.good()) {
		std::cout << message;
		std::cin >> s;
	}
}

void PhoneBook::add() {
    Contact tmp;
    std::string s;

    readline("first_name: ", s);
    tmp.set_first_name(s);
    readline("last_name: ", s);
    tmp.set_last_name(s);
    readline("nickname: ", s);
    tmp.set_nickname(s);
    readline("phone_number: ", s);
    tmp.set_phone_number(s);
    readline("darkest_secret: ", s);
    tmp.set_darkest_secret(s);
    if (tmp.is_valid_contact()) {
        _contacts[_idx] = tmp;
        _idx = (_idx + 1) % 8;
    } else if (std::cin.good()) {
		std::cout << "Each field must not be empty.";
	}
	std::cout << std::endl;
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
	std::cout << "index: ";
	std::getline(std::cin, tmp);
	if (std::cin.good()) {
		if (tmp.length() == 1 && '0' <= tmp[0] && tmp[0] <= '8' &&
			_contacts[tmp[0] - '0'].is_valid_contact()) {
			std::cout << "first_name: " << _contacts[tmp[0] - '0'].get_first_name()
					  << std::endl;
			std::cout << "last_name: " << _contacts[tmp[0] - '0'].get_last_name()
					  << std::endl;
			std::cout << "nickname: " << _contacts[tmp[0] - '0'].get_nickname()
					  << std::endl;
			std::cout << "phone_number: " << _contacts[tmp[0] - '0'].get_phone_number()
					  << std::endl;
			std::cout << "darkest_secret: " << _contacts[tmp[0] - '0'].get_darkest_secret()
					  << std::endl;
		}
		else {
			std::cout << "※ index is not valid!!!";
		}
	}
	std::cout << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
