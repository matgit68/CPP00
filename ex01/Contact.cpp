#include "Contact.hpp"

void	normDisp(std::string str) {
	if (str.size() > 10) {
		str.resize(10);
		str[9] = '.';
	}
	std::cout << std::setfill(' ') << std::setw(10) << str;
}

void	Contact::shortDisp(int i) {
	std::cout << i + 1 << "|";
	normDisp(this->fname);
	std::cout << "|";
	normDisp(this->lname);
	std::cout << "|";
	normDisp(this->nick);
	std::cout << "|" << std::endl;
}

void	Contact::fullDisp(void) {
	std::cout << "First name \t : " << this->fname << std::endl;
	std::cout << "Last name \t : " << this->lname << std::endl;
	std::cout << "Nickname \t : " << this->nick << std::endl;
	std::cout << "Phone number \t : " << this->phone << std::endl;
	std::cout << "Darkest secret \t : " << this->secret << std::endl;
}

void	fillIn(std::string lbl, std::string *str) {
	while (1) {
		if (std::cin.eof())
			break;
		std::cout << lbl << std::endl;
		std::getline(std::cin, *str);
		if (*str != "")
			break;
	}
}

void	Contact::add(void) {
	fillIn("First name", &(this->fname));
	fillIn("Last name", &(this->lname));
	fillIn("Nickname", &(this->nick));
	fillIn("Phone number", &(this->phone));
	fillIn("Darkest secret", &(this->secret));
	// std::cout << "Last name" << std::endl;
	// std::getline(std::cin, this->lname);
	// std::cout << "Nickname" << std::endl;
	// std::getline(std::cin, this->nick);
	// std::cout << "Phone number" << std::endl;
	// std::getline(std::cin, this->phone);
	// std::cout << "Darkest secret" << std::endl;
	// std::getline(std::cin, this->secret);
}