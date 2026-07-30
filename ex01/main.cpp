#include "Zombie.hpp"

// when argc == 1 run these by default
static void defaultTests(void)
{
    std::cout << B_PURPLE << "No parameters added, running default tests!\n" << RESET;

    int hordeSize = 5;

    std::cout << RED << "==== Spawning Zombie Horde [" << hordeSize << " zombies] ====\n"
              << RESET;

    Zombie* horde = zombieHorde(hordeSize, "Jorge");

    if (horde != NULL)
    {
        std::cout << RED << "\n*** Announcing Horde ***\n" << RESET;
        for (int i = 0; i < hordeSize; i++)
        {
            std::cout << B_PURPLE << "Zombie [" << i << "]: " << RESET;
            horde[i].announce();
        }

        std::cout << RED << "\n*** Destroying Horde ***\n" << RESET;
        delete[] horde;
    }

    std::cout << RED << "\n*** Edge Case Test (N <= 0) ***\n" << RESET;

    Zombie* emptyHorde = zombieHorde(0, "Nullzz");
    if (emptyHorde == NULL)
    {
        std::cout << YELLOW << "Successfully handled NEGATIVE or 0 N by returning NULL\n"
                  << RESET;
    }
}

// argc==3 ./zombieHorde <count> <name>
static void argTest(int count, std::string name)
{
    std::cout << RED << "==== Spawning Custom Zombie Horde [" << count
              << " zombies with name \"" << name << "\"] ====\n"
              << RESET;

    Zombie* horde = zombieHorde(count, name);

    if (horde != NULL)
    {
        std::cout << RED << "\n*** Announcing Horde ***\n" << RESET;
        for (int i = 0; i < count; i++)
        {
            std::cout << B_PURPLE << "Zombie [" << i << "]: " << RESET;
            horde[i].announce();
        }

        std::cout << RED << "\n*** Destroying Horde ***\n" << RESET;
        delete[] horde;
    }
    else
    {
        std::cout << YELLOW << "Invalid count, choose a positive nr and not 0 !\n" << RESET;
    }
}

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        defaultTests();
    }
    else if (argc == 3)
    {
        int count = std::atoi(argv[1]);
        std::string name = argv[2];
        argTest(count, name);
    }
    else
    {
        std::cout << RED << "Usage Error! <<<\n"
                  << YELLOW << "Run either with no arguments to execute default tests:\n  "
                  << argv[0] << "\nOr give 2 parameters <COUNT> <NAME>:\n  " << argv[0]
                  << " <COUNT> <NAME>\n"
                  << "Example:\n   " << argv[0] << " 3 Micael\n"
                  << RESET;
        return 1;
    }

    return 0;
}
