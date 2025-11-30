/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:21:59 by dfeve             #+#    #+#             */
/*   Updated: 2025/07/19 20:29:05 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:
		Contact();
		Contact(std::string FirstName, std::string LastName, std::string Nickname, std::string PhoneNumber, std::string DarkestSecret, int index);
		void	PrintContact();
		void	PrintFullContact();
	private:
		std::string _FirstName;
		std::string _LastName;
		std::string	_Nickname;
		std::string _PhoneNumber;
		std::string _DarkestSecret;
		int			_index;
};