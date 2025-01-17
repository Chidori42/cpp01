/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:32:46 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/17 15:22:48 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        return NULL;
    }

    Zombie* horde;

    horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }

    return horde;
}