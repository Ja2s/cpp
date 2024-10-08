/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavairo <jgavairo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:52:03 by jgavairo          #+#    #+#             */
/*   Updated: 2024/10/06 15:17:58 by jgavairo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    /*Weapons creations*/
    Weapon ak47("Ak-47 with ACOG");
    Weapon mp5("mp5-K");

    /*HumanA creation and tests*/
    HumanA squeezie("Squeezie", ak47);
    squeezie.attack();
    ak47.setType("Ak-47 without ACOG");
    squeezie.attack();
    
    /*HumanB creation and tests*/
    HumanB gotaga("Gotaga");
    gotaga.attack();    
    gotaga.setWeapon(mp5);
    gotaga.attack();
}