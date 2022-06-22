#include <iostream>
#include <iomanip>

// Stastics of Course Menu
void statisticsOfCourseMenuDisplay()
{
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(64) << "View Statistics Of Result Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t1) Display the student result according to faculty\n";
    std::cout << "\t\t2) Display the student result to program in a faculty\n";
    std::cout << "\t\t3) Display the student result according to semester\n";
    std::cout << "\t\t4) Exit\n\n";
}