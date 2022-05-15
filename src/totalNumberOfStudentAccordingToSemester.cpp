#include <iostream>
#include <string>
#include <limits>

void totalNumberOfStudentAccordingToSemester()
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tView Statistics Of Student Menu\n";
    std::cout << "\t\t============================================================\n";

    int total{};
    // for(int i{0};i<constants::semester.size();i++)
    std::cout << "\t\t\tNo."
              << "\tSemester"
              << "\t\tTotal Student\n";
    std::cout << "\t\t\t----------------------------------------\n";

    std::cout << "\t\t\t----------------------------------------\n";
    std::cout << "\t\t\t\t\t Total: " << total << '\n';

    std::cout << "Press Enter to continue\n";
    std::cin.get();
}