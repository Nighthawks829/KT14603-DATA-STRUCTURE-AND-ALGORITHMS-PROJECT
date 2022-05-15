#include <iostream>
#include <string>
#include <limits>

void totalNumberOfStudentAccordingToProgramme()
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
              << "\t\tTotal Student\n";
    std::cout << "\t\t\t----------------------------------------\n";

    // std::cout << "\t\tNo.\tProgramme\t";
    // for (size_t i{0}; i < constants::level.size(); i++)
    // {
    //     std::cout << constants::level[i] << "\t";
    // }

    //  for (size_t i{0}; i < constants::programme.size(); i++)

    std::cout << "\n\t\t--------------------------------------------------------------------------------\n";

    std::cout << "\t\t--------------------------------------------------------------------------------\n";
    std::cout << "\t\t\tTotal: \t\t\n";
    std::cout << "Press Enter to continue\n";

    // for (size_t i{0}; i < total.size(); i++)
    // {
    //     std::cout << "   " << total[i] << "\t\t";
    // }
    // std::cout << "\n\t\t--------------------------------------------------------------------------------\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}