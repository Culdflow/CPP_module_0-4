/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:46:11 by dfeve             #+#    #+#             */
/*   Updated: 2025/12/07 22:43:59 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	phonebook;
	std::string	input;

	std::cout << "(EXIT, SEARCH, ADD)" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		if (input == "EXIT")
			return 0;
		else if (input == "SEARCH")
			phonebook.PrintContacts();
		else if (input == "ADD")
			phonebook.addContact(phonebook.getIndex());
		else
		{
			std::cout << "[ERROR]: Command Doesn't Exist" << std::endl;
			std::cout << "(EXIT, SEARCH, ADD)" << std::endl;
		}
	}
}