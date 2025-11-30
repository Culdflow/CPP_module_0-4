/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:46:11 by dfeve             #+#    #+#             */
/*   Updated: 2025/07/19 20:28:02 by dfeve            ###   ########.fr       */
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
	}
}