#define RED "\033[31m"
#define B_GREEN "\033[1;32m"
#define RESET "\033[0m"

#include <iostream>
#include <fstream>
#include <string>

/*
./ex04 test.txt heat COOL
diff test.txt test.txt.replace

.c_str(): converts the c++ std::string object into a c style string (const char*)
in c++98 file stream constructors only  accept c style string paths
(like "test.txt" or const char*), not c++ std::string objects.

like sed, change all occurences of a word in target text.
line by line, erases, writes, advances counter, writes to outfile

if find.line doesnt find match returns std::string::npos
*/
void replaceInFile(const std::string& inFileName, const std::string& target,
                   const std::string& replacement)
{
    std::ifstream inFile(inFileName.c_str());
    if (inFile.is_open() == false)
    {
        std::cout << RED << "Error: couldn't open input file '" << inFileName << "'.\n"
                  << RESET;
        return;
    }

    std::string outFileName = inFileName;
    outFileName.append(".replace");

    std::ofstream outFile(outFileName.c_str());
    if (outFile.is_open() == false)
    {
        std::cout << RED << "Error: couldn't create output file '" << outFileName << "'.\n"
                  << RESET;
        inFile.close();
        return;
    }

    std::string line;

    while (true)
    {
        if (std::getline(inFile, line).fail() == true)
        {
            break;
        }

        size_t matchFound = 0;

        while (true)
        {
            matchFound = line.find(target, matchFound);
            if (matchFound == ((size_t)-1))
                break;

            line.erase(matchFound, target.length());
            line.insert(matchFound, replacement);
            matchFound = matchFound + replacement.length();
        }

        outFile << line;

        if (!inFile.eof())
        {
            outFile << "\n";
        }
    }

    inFile.close();
    outFile.close();
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << RED << "Error! Usage is: " << argv[0]
                  << " <filename> <target> <replacement>\n"
                  << RESET;
        return 1;
    }

    std::string inFileName = argv[1];
    std::string target = argv[2];
    std::string replacement = argv[3];

    if (target.empty() == true)
    {
        std::cout << RED << "Error: Target string to replace cannot be empty.\n" << RESET;
        return 1;
    }

    replaceInFile(inFileName, target, replacement);
    std::cout << B_GREEN << "Replacement successeful, if any! Forget sed!\n" << RESET;

    return 0;
}
