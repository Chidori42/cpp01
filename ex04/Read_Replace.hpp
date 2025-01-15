/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read_Replace.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 23:56:25 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/15 23:56:25 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_REPLACE_HPP
#define READ_REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

void Openfile(const std::string& filename, std::ifstream &new_file);
void Create_newfile(const std::string& filename, std::ofstream &file);
void Add_New_content(const std::string& filename, const std::string& New_content);
std::string Read_And_Replace(std::ifstream &file, const std::string& s1, const std::string& s2);
std::string Replace_line(const std::string& Content, const std::string& s1, const std::string& s2);

#endif

