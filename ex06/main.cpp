#include "Harl.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << RED << "Error: Usage is " << argv[0] << " [LOG_ARG]\n" << RESET;
        return 1;
    }

    Harl harl;

    harl.filter(argv[1]);

    return 0;
}
