/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:36:08 by ael-fagr          #+#    #+#             */
/*   Updated: 2024/10/07 21:18:23 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie( std::string name );
        ~Zombie( void );
        void announce( void );
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
