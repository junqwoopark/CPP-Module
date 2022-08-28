#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact() {
    _first_name = "";
    _last_name = "";
    _nickname = "";
    _phone_number = "";
    _darkest_secret = "";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Contact &Contact::operator=(Contact const &rhs) {
    if (this != &rhs) {
        this->_first_name = rhs.get_first_name();
        this->_last_name = rhs.get_last_name();
        this->_nickname = rhs.get_nickname();
        this->_phone_number = rhs.get_phone_number();
        this->_darkest_secret = rhs.get_darkest_secret();
    }
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Contact::is_print_str(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isprint(str[i])) return (false);
    }
    return (true);
}

int Contact::is_valid_contact() {
    if (_first_name == "" || _last_name == "" || _nickname == "" ||
        _phone_number == "" || _darkest_secret == "")
        return (false);
    else if (!(is_print_str(_first_name) && is_print_str(_last_name) &&
               is_print_str(_nickname) && is_print_str(_phone_number) &&
               is_print_str(_darkest_secret)))
        return (false);
    return (true);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Contact::set_first_name(std::string first_name) {
    _first_name = first_name;
}
void Contact::set_last_name(std::string last_name) { _last_name = last_name; }
void Contact::set_nickname(std::string nickname) { _nickname = nickname; }
void Contact::set_phone_number(std::string phone_number) {
    _phone_number = phone_number;
}
void Contact::set_darkest_secret(std::string darkest_secret) {
    _darkest_secret = darkest_secret;
}

std::string Contact::get_first_name() const { return (_first_name); }
std::string Contact::get_last_name() const { return (_last_name); }
std::string Contact::get_nickname() const { return (_nickname); }
std::string Contact::get_phone_number() const { return (_phone_number); }
std::string Contact::get_darkest_secret() const { return (_darkest_secret); }

/* ************************************************************************** */
