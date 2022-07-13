/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:35:07 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/13 14:43:23 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getFirstName() const
{
	return this->_FirstName;
}

std::string Contact::getLastName() const
{
	return this->_LastName;
}

std::string Contact::getNickname() const
{
	return this->_Nickname;
}

std::string Contact::getPhone() const
{
	return this->_Phone;
}

std::string Contact::getSecret() const
{
	return this->_Secret;
}

void Contact::setFirstName(std::string str)
{
	this->_FirstName= str;
	return;
}

void Contact::setLastName(std::string str)
{
	this->_LastName= str;
	return;
}

void Contact::setNickname(std::string str)
{
	this->_Nickname= str;
	return;
}

void Contact::setPhone(std::string str)
{
	this->_Phone= str;
	return;
}

void Contact::setSecret(std::string str)
{
	this->_Secret= str;
	return;
}
