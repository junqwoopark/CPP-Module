#include "Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl() {}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/
void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                                &Harl::error};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) (this->*f[i])();
    }
}

void Harl::filter(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                                &Harl::error};
    int i;
    for (i = 0; i < 4; i++) {
        if (levels[i] == level) {
            for (int j = i; j < 4; j++) {
                std::cout << "[ " << levels[j] << " ]" << std::endl;
                (this->*f[j])();
                std::cout << std::endl;
            }
            break;
        }
    }
    if (i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << std::endl;
}

void Harl::debug(void) {
    std::cout << "I love having  extra bacon for my "
                 "7XL-double-cheese-triple-pickle-special-ketchup burger."
                 "I really do !"
              << std::endl;
}
void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You "
                 "didn’t put enough bacon in my burger! If you did, I wouldn’t "
                 "be asking for more!"
              << std::endl;
}
void Harl::warning(void) {
    std::cout
        << "I think I deserve to have some extra bacon for free. I’ve been "
           "coming for years whereas you started working here since last month."
        << std::endl;
}
void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

/*
** ---------------------------------
*ACCESSOR---------------------------------
*/

/* **************************************************************************
 */
