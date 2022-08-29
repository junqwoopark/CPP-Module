/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkpark <junkpark@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:23:20 by junkpark          #+#    #+#             */
/*   Updated: 2022/08/18 15:44:06 by junkpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"

int main(void) {
    PhoneBook phonebook;
    std::string input;
    std::cout << "PhoneBook Opened." << std::endl;
    while (std::cin.good()) {
        std::cout << "input: ";
        std::getline(std::cin, input);
        if (std::cin.good()) {
            if (input == "ADD") {
                phonebook.add();
            } else if (input == "SEARCH") {
                phonebook.search();
            } else if (input == "EXIT") {
                break;
            } else {
                std::cout << "※ Please input 'ADD' or 'SEARCH' or 'EXIT'!!!"
                          << std::endl;
            }
        } else {
            std::cout << std::endl;
            break;
        }
    }
    std::cout << "PhoneBook Closed." << std::endl;
    return (0);
}
