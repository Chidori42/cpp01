#ifndef READ_REPLACE_HPP
#define READ_REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

void Openfile(std::string filename , std::ifstream &new_file);
std::ofstream Create_newfile(std::string filename);
std::string Replace_line(std::string Content, std::string s1, std::string s2);
void Add_New_content(std::string filename, std::string New_content);
std::string Read_And_Replace(std::ifstream &file, std::string s1, std::string s2);

#endif

