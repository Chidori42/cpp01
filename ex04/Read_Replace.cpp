/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Read_Replace.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 23:56:21 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/01/15 23:56:21 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Read_Replace.hpp"

void Openfile(const std::string& filename, std::ifstream &new_file) {
    new_file.open(filename.c_str());
}

void Create_newfile(const std::string& filename, std::ofstream &file) {
    std::string New_file = filename + std::string(".replace");
    file.open(New_file.c_str());
}

std::string Replace_line(const std::string& Content, const std::string& s1, const std::string& s2) {
    std::string::size_type pos = 0;
    std::string result = Content;
    while ((pos = result.find(s1, pos)) != std::string::npos) {
        result.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return result;
}

void Add_New_content(const std::string& filename, const std::string& New_content) {
    std::ofstream New_file;
    Create_newfile(filename, New_file);
    if (New_file.is_open()) {
        New_file << New_content;
        New_file.close();
    } else {
        std::cerr << "Failed to create the new file." << std::endl;
    }
}

std::string Read_And_Replace(std::ifstream &file, const std::string& s1, const std::string& s2) {
    std::string line;
    std::string allContent;
    while (std::getline(file, line)) {
        allContent += line + '\n';
    }
    file.close();
    return Replace_line(allContent, s1, s2);
}