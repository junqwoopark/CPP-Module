#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
   private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

    int is_print_str(std::string str);

   public:
    Contact();
    Contact(Contact const& src);
    ~Contact();

    Contact& operator=(Contact const& rhs);

    int is_valid_contact();

    void set_first_name(std::string first_name);
    void set_last_name(std::string second_name);
    void set_nickname(std::string nickname);
    void set_phone_number(std::string phone_number);
    void set_darkest_secret(std::string darkest_secret);

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
};

std::ostream& operator<<(std::ostream& o, Contact const& i);

#endif /* ******************************************************* CONTACT_H */
