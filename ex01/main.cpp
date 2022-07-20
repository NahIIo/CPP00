/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:46:48 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/20 08:01:57 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

void addContact(Phonebook *phonebook)
{
	Contact		contact;
	std::string str;

	std::cout << "First Name : ";
	while (str.empty())
		getline(std::cin, str);
	contact.setFirstName(str);
	str.clear();
	std::cout << "Last Name : ";
	while (str.empty())
		getline(std::cin, str);
	contact.setLastName(str);
	str.clear();
	std::cout << "Nickname : ";
	while (str.empty())
		getline(std::cin, str);
	contact.setNickname(str);
	str.clear();
	std::cout << "Phone number : ";
	while (str.empty())
		getline(std::cin, str);
	contact.setPhone(str);
	str.clear();
	std::cout << "Darkest Secret : ";
	while (str.empty())
		getline(std::cin, str);
	contact.setSecret(str);
	str.clear();
	phonebook->setContact(contact);
}

std::string trunc(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

static int stoi( std::string & s ) {
    int i;
    std::istringstream(s) >> i;
    return i;
}

void searchContact(Phonebook *phonebook)
{
	int count = phonebook->getCount();

	std::cout << std::setw(10) << std::right << "index";
	std::cout << '|' <<std::setw(10) << std::right << "first name";
	std::cout << '|' << std::setw(10) << std::right << "last name";
	std::cout << '|' << std::setw(10) << std::right << "nickname" << std::endl;
	
	for (int i = 0; i < phonebook->getCount(); i++)
	{
		Contact contact = phonebook->getContact(i);
		std::cout <<std::setw(10) << i + 1;
		std::cout << '|' <<std::setw(10) << trunc(contact.getFirstName());
		std::cout << '|' <<std::setw(10) << trunc(contact.getLastName());
		std::cout << '|' <<std::setw(10) << trunc(contact.getNickname()) <<std::endl;
	}
	if (count > 0)
	{
		int index;

		std::cout << "Please enter the index of the contact page you wish to open : ";
		std::string idx;
		while (1)
		{
			getline(std::cin, idx);
			if (idx.length() == 1)
			{
				index = stoi(idx);
				if (index > count || index < 1)
				{
					std::cout << std::endl <<"Please enter a valid index : ";
					continue;
				}
				else
					break;
			}
			std::cout << std::endl <<"Please enter a valid index : ";
		}
		index--;
		Contact tmp = phonebook->getContact(index);
		std::cout << std::endl;
		std::cout << "First Name : " << tmp.getFirstName() << std::endl;
		std::cout << "Last Name : " << tmp.getLastName() << std::endl;
		std::cout << "Nickname : " << tmp.getNickname() << std::endl;
		std::cout << "Phone : " << tmp.getPhone() << std::endl;
		std::cout << "Darkest Secret : " << tmp.getSecret() << std::endl;
	}
	else
	{
		std::cout << "Contact list is empty !" << std::endl;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int	main()
{
	Phonebook phonebook;

	std::cout << "List of commands :" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl; 
	while (1)
	{
		std::string command;

		std::cout << std::endl << "Enter a command : ";
		getline(std::cin, command);
		if (command == "ADD")
			addContact(&phonebook);
		else if (command == "SEARCH")
			searchContact(&phonebook);
		else if (command == "EXIT")
			break;
	}
}
