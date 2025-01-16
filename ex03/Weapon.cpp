/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:36:39 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/16 15:22:32 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon created" << std::endl;
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destroyed" << std::endl;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType()
{
    return this->type;
}