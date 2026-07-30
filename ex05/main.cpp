#include "Harl.hpp"

int main(int argc, char** argv)
{
    Harl harl;

    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            std::cout << BLUE << ">>> Testing argument [" << argv[i] << "]\n" << RESET;
            harl.complain(argv[i]);
        }
        return 0;
    }

    std::cout << RED << "ERROR! Usage: " << argv[0] << " <level>\n" << RESET;

    return 0;
}

/*
int main(void)
{
    Harl harl;

    harl.complain("DEBUG");

    harl.complain("INFO");

    harl.complain("WARNING");

    harl.complain("ERROR");

    harl.complain("INVALID_LEVEL");

    harl.complain("");

    return 0;
}

*/