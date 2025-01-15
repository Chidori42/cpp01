/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 23:56:03 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/15 23:56:03 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2)
    {
        std::cout << "Invalid Number of Input" << std::endl;
        return 1;
    }
    Harl harl;

    harl.complain(av[1]);
    return 0;
}