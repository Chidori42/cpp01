/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:39:47 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/17 15:22:33 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    std::string zombieName = "Walker";

    Zombie* horde = zombieHorde(N, zombieName);

    if (horde != NULL) {
        for (int i = 0; i < N; i++) {
            horde[i].announce();
        }
    }
    delete[] horde;
    return 0;
}