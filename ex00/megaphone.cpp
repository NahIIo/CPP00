/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 08:26:52 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/13 14:39:37 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (char *ptr = av[i]; *ptr != '\0'; ptr++)
				*ptr = toupper(*ptr);
			std::cout << av[i];
			if (i < ac - 1)
				std::cout << ' ';
			else
				std::cout << std::endl;
		}
	}
	return (1);
}
