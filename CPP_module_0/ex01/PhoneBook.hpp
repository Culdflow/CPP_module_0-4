/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:22:17 by dfeve             #+#    #+#             */
/*   Updated: 2025/07/19 19:59:28 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		int	_pos;
		Contact	_contacts[8];
	public:
		PhoneBook();
		Contact getContact(int c);
		int		getIndex();
		void	PrintContacts();
		void	addContact(int index);
};