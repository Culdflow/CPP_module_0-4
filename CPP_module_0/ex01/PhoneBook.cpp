/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:22:10 by dfeve             #+#    #+#             */
/*   Updated: 2025/07/19 20:44:55 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	error_msg()
{
	std::cout << " A saved contact can’t have empty fields." << std::endl;
}

void	PhoneBook::addContact(int index)
{
	std::string	FirstName;
	std::string	Nickname;
	std::string	LastName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

	std::cout << "FIRST NAME: ";
	std::getline(std::cin, FirstName);
	std::cout << "LAST NAME: ";
	std::getline(std::cin, LastName);
	std::cout << "NICKNAME: ";
	std::getline(std::cin, Nickname);
	std::cout << "PHONE NUMBER: ";
	std::getline(std::cin, PhoneNumber);
	std::cout << "DarkestSecret: ";
	std::getline(std::cin, DarkestSecret);
	if (FirstName.empty() || LastName.empty() || Nickname.empty() || PhoneNumber.empty() || DarkestSecret.empty())
	{
		error_msg();
		return ;
	}
	Contact newContact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret, index);
	_contacts[_pos % 8] = newContact;
	_pos++;
}

PhoneBook::PhoneBook()
{
	_pos = 0;
}

Contact	PhoneBook::getContact(int c)
{
	return (_contacts[c]);
}

void	PhoneBook::PrintContacts()
{
	int			i;
	bool		did_enter;
	std::string input;
	int			index;

	i = 0;
	did_enter = false;
	while (i < 8)
	{
		getContact(i++).PrintContact();
		did_enter = true;
	}
	if (did_enter == true)
	{
		std::getline(std::cin, input);
		if (input.empty() || input.length() != 1 || !isdigit(input[0]))
		{
			std::cout << "ERROR: OUT OF BOUNDS MUST BE A VALID INDEX" << std::endl;
			return ;
		}
		index = input[0] - '0';
		if (index < 0 || index > _pos || index > 8)
		{
			std::cout << "ERROR: OUT OF BOUNDS MUST BE A VALID INDEX" << std::endl;
			return ;
		}
		getContact(index).PrintFullContact();
	}
}
int	PhoneBook::getIndex()
{
	return (_pos % 8);
}