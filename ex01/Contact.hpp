/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamat <mamat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:49:29 by mamat             #+#    #+#             */
/*   Updated: 2023/09/04 22:44:50 by mamat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iomanip>
# include <iostream>
# include <string>

class Contact {

	private :
		std::string	fname;
		std::string	lname;
		std::string	nick;
		std::string	phone;
		std::string	secret;
	
	public :
		void	add(void);
		void	shortDisp(int i);
		void	fullDisp(void);
};

void	normDisp(std::string str);

#endif