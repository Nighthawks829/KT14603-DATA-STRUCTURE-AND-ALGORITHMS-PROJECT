#include <iostream>
#include <string>
#include <limits>

void totalNumberOfStudentAccordingToFaculty()
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tAcademic Staff Publication Management System\n";
    std::cout << "\t\t\t\tView Statistics Of Student Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t\tNo."
              << "\tFaculty"
              << "\t\tTotal Student\n";
    std::cout << "\t\t\t----------------------------------------\n";

    int total = 0;
    // for (size_t i{0}; i < constants::faculty.size(); i++)
    // {
    //     std::string facultyName = constants::faculty[i];
    //     int number = staffList->numberOfStaffAccordingToFaculty(constants::faculty[i]);
    //     std::cout << "\t\t\t" << i + 1 << ".\t" << facultyName << "\t\t" << number << '\n';
    //     total += number;
    // }
    std::cout << "\t\t\t----------------------------------------\n";
    std::cout << "\t\t\t\t\t Total: " << total << '\n';
    
    std::cout << "Press Enter to continue\n";
    // std::cin.clear();
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}