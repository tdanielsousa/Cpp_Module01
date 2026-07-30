#define YELLOW "\033[33m"
#define RESET "\033[0m"
#define BLUE "\033[34m"
#define B_PURPLE "\033[1;35m"

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << BLUE << "Memory address of the string variable: " << YELLOW << &str << RESET;
    std::cout << BLUE << "\nMemory address held by stringPTR:     " << YELLOW << stringPTR
              << RESET;
    std::cout << BLUE << "\nMemory address held by stringREF:     " << YELLOW << &stringREF
              << RESET;

    std::cout << "\n";

    std::cout << BLUE << "\nValue of the string variable:  " << YELLOW << str << RESET;
    std::cout << BLUE << "\nValue pointed to by stringPTR: " << YELLOW << *stringPTR << RESET;
    std::cout << BLUE << "\nValue pointed to by stringREF: " << YELLOW << stringREF << RESET;

    std::cout << "\n";

    return 0;
}
