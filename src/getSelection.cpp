#include <iostream>
#include <limits>

int getSelection(int numberOfChoice)
{
    int selection{0};
    while (selection < 1 || selection > numberOfChoice)
    {
        std::cout << "\t\tChoose Operation: ";
        std::cin >> selection;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return selection;
}