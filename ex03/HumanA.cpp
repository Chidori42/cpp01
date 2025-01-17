/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:49:14 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/17 15:16:44 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
    std::cout << "HumanA created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}