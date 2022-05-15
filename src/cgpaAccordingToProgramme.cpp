#include <iostream>
#include <string>
#include <limits>

void cgpaAccordingToProgramme()
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tView Statistics Of Student Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "Faculty: ";
    std::string faculty;
    std::cin >> faculty;
    // std::vector<int> total(constants::level.size(), 0);

    std::cout << "\t\t\tNo."
              << "\tProgramme"
              << "\t\tCGPA\n";
    std::cout << "\t\t\t----------------------------------------\n";

    // for(int i{0},i<constants::programme;i++)

    std::cout << "\t\t\t----------------------------------------\n";
    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}