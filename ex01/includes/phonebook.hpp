/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:10:20 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/12 10:21:54 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		Contact getContact(int index) const;
		int		getCount() const;
		void	setContact(Contact contact);
	private:
		static int	_count;
		Contact 	_contacts[8];
		int 		_index;
};

#endif
