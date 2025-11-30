/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:22:06 by dfeve             #+#    #+#             */
/*   Updated: 2025/07/19 20:35:53 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Default Contact Constructor Called" << std::endl;
}

Contact::Contact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret, int index) : _FirstName(FirstName), _LastName(LastName), _Nickname(Nickname), _PhoneNumber(PhoneNumber), _DarkestSecret(DarkestSecret), _index(index) 
{
	std::cout << "Contact Constructor Called" << std::endl;
}

void	Contact::PrintFullContact()
{
	std::cout << _FirstName << std::endl;
	std::cout << _LastName << std::endl;
	std::cout << _Nickname << std::endl;
	std::cout << _PhoneNumber << std::endl;
	std::cout << _DarkestSecret << std::endl;
}

void	Contact::PrintContact()
{
	if (this->_FirstName.empty())
		return ;
	std::string firstnamePrint;
	std::string lastnamePrint;
	std::string nicknamePrint;

	if (_FirstName.length() > 10)
	{
		firstnamePrint = _FirstName.substr(0, 10);
		firstnamePrint[9] = '.';
	}
	else
		firstnamePrint = _FirstName; 
	if (_LastName.length() > 10)
	{
		lastnamePrint = _LastName.substr(0, 10);
		lastnamePrint[9] = '.';
	}
	else
		lastnamePrint = _LastName;
	if (_Nickname.length() > 10)
	{
		nicknamePrint = _Nickname.substr(0, 10);
		nicknamePrint[9] = '.';
	}
	else
		nicknamePrint = _Nickname;
	std::cout << std::setw(10) << _index << "|" << std::setw(10) << firstnamePrint << "|" << std::setw(10) << lastnamePrint << "|" << std::setw(10) << nicknamePrint << std::endl;
}