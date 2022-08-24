#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Contact::Contact() {}

Contact::Contact(const Contact& src) {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Contact::~Contact() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Contact& Contact::operator=(Contact const& rhs) {
    (void)rhs;
    // if ( this != &rhs )
    //{
    // this->_value = rhs.getValue();
    //}
    return *this;
}

std::ostream& operator<<(std::ostream& o, Contact const& i) {
    (void)i;
    // o << "Value = " << i.getValue();
    return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Contact::set_first_name(std::string _first_name) {
    first_name = _first_name;
}
void Contact::set_last_name(std::string _last_name) { last_name = _last_name; }
void Contact::set_nickname(std::string _nickname) { nickname = _nickname; }
void Contact::set_phone_number(std::string _phone_number) {
    phone_number = _phone_number;
}
void Contact::set_darkest_secret(std::string _darkest_secret) {}

std::string Contact::get_first_name() const { return (first_name); }
std::string Contact::get_last_name() const { return (last_name); }
std::string Contact::get_nickname() const { return (nickname); }
std::string Contact::get_phone_number() const { return (phone_number); }
std::string Contact::get_darkest_secret() const { return (darkest_secret); }

/* ************************************************************************** */
