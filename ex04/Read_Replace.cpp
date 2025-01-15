#include "Read_Replace.hpp"

void Openfile(std::string filename, std::ifstream &new_file)
{
    new_file.open(filename.c_str());
}

std::ofstream Create_newfile(std::string filename)
{
    std::ofstream file;
    std::string New_file = filename + ".replace";
    file.open(New_file);
    return file;
}

std::string Replace_line(std::string Content, std::string s1, std::string s2)
{
    int pos = 0;

    while ((size_t)(pos = Content.find(s1, pos)) != std::string::npos) {
        Content.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
    return (Content);
}

void Add_New_content(std::string filename, std::string New_content)
{
    std::ofstream New_file = Create_newfile(filename);

    if (New_file.is_open())
    {
        New_file << New_content;
        New_file.close(); 
    }
    else
    {
        std::cerr << "Failed to create the new file." << std::endl;
    }
}

std::string Read_And_Replace(std::ifstream &file, std::string s1, std::string s2)
{
    std::string line;
    std::string allContent;
    while (std::getline(file, line)) {
        allContent += line + '\n';
    }
    file.close();
    return Replace_line(allContent, s1, s2);
}