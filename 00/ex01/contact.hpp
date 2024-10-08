/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:59:02 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/09 17:50:19 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstddef>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	std::string getNoEmptyInput(const std::string& prompt);
	bool isPrintable(std::string& input);
	int   index;

public:
	Contact();
	~Contact();
	int setInfo(int i);
	void printResume();
	void printDetails();
};

#endif

