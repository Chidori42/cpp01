#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;

    std::string& stringREF = str;
    std::cout << "address of the string is: " << &str << std::endl;
    std::cout << "address of the stringPTR is: " << stringPTR << std::endl;
    std::cout << "address of the stringREF is: " << &stringREF << std::endl;
    std::cout << "value of the string is: " << str << std::endl;
    std::cout << "value of the stringPTR is: " << *stringPTR << std::endl;
    std::cout << "value of the stringREF is: " << stringREF << std::endl;
    return 0;
}