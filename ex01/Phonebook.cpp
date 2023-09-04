/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamat <mamat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:45:39 by mamat             #+#    #+#             */
/*   Updated: 2023/09/05 00:41:48 by mamat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

bool iequals(std::string a, std::string b)
{
    unsigned int sz = a.size();
    if (b.size() != sz)
        return false;
    for (unsigned int i = 0; i < sz; ++i)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}

void	dispHeader(void){
	std::cout << "#|";
	normDisp("First Name");
	std::cout << '|';
	normDisp("Last Name");
	std::cout << '|';
	normDisp("Nickname");
	std::cout << '|' << std::endl;
}

void	Phonebook::search(void){
	std::string	str;
	int			n;

	dispHeader();
	for (int i = 0; i < 8; i++)
		contactList[i].shortDisp(i);
	while (1) {
		std::cout << "Select a contact to display full info" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break;
		if (str.size() == 1) {
			n = str[0] - 49;
			if (n >= 0 && n <= 7) {
				contactList[n].fullDisp();
				break;
			}
		}
	}
}

Phonebook::Phonebook(void){
	std::string	str="";
	int		n = 0;

	std::cout << "Welcome to Phonebook" << std::endl;
	while (1) {
		std::cout << "Input command : (A)dd / (S)earch / (E)xit" << std::endl;
		std::getline(std::cin, str);
		if (iequals(str, "a") || iequals(str, "add")){
			this->contactList[n++].add();
			if (n >= 8)
				n = 0;
		}
		if (iequals(str, "s") || iequals(str, "search"))
			search();
		if (iequals(str, "e") || iequals(str, "exit") || std::cin.eof())
			break;
		// std::cin.clear();
		// std::cin.ignore();
	}
}

Phonebook::~Phonebook(void){
	std::cout << "Good bye" << std::endl;
}
