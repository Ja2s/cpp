/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:24:49 by jgavairo          #+#    #+#             */
/*   Updated: 2024/09/25 17:06:18 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook
{
    private :
        Contact contacts[8];
		int		numberContact;
        
    public :
        PhoneBook();
        ~PhoneBook();
        void	addContact(PhoneBook phonebook);
		void	searchContact(PhoneBook phonebook);

};