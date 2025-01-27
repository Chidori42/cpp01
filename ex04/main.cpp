/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 23:56:18 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/15 23:56:18 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Read_Replace.hpp"

int main(int ac, char **av) {
    if (ac != 4) {
        std::cerr << "Invalid number of parameters." << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream new_file;
    Openfile(filename, new_file);

    if (new_file.is_open()) {
        std::string New_Content = Read_And_Replace(new_file, s1, s2);
        Add_New_content(filename, New_Content);
    } else {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }
    return 0;
}