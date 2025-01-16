/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:47:34 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/16 21:55:57 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
    std::cout << "HumanB created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
    this->weapon = &newWeapon;
}