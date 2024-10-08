/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:31:37 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/10/08 01:06:25 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        void setName(std::string newName);
};

Zombie* zombieHorde( int N, std::string name );
#endif