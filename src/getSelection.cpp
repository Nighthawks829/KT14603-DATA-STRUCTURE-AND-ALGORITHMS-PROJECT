#include <iostream>
#include <limits>

// Get user input for the operation 
// 1. User input the operation
// 2. Check the condition make sure the user input inside the range
// 3. Check the user input is valid (number format)
// 4. Loop until user input the valid input
// 5. Return the input

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