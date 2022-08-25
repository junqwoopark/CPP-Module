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
    while (true) {
        std::getline(std::cin, input);
        if (input == "ADD") {
        } else if (input == "SEARCH") {
        }
    }
}
