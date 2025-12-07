/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfeve <dfeve@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:22:26 by dfeve             #+#    #+#             */
/*   Updated: 2025/12/07 22:41:46 by dfeve            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	PrintCapitalized(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		std::cout << (char)toupper(str[i++]);
}

int	main(int argc, char **argv)
{
	int x;

	x = 1;
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (x < argc)
	{
		PrintCapitalized(argv[x]);
		x++;
		if (argv[x])
			std::cout << " ";
	}
	std::cout << std::endl;
	return 0;
}