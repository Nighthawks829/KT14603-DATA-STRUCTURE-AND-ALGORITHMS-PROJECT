#include <iomanip>
#include <iostream>

void statisticsOfStudentMenuDisplay()
{
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65)<<"Student Results Management System\n";
    std::cout << std::setw(64)<<"View Statistics Of Student Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t1) Display the total number of student according to faculty\n";
    std::cout << "\t\t2) Display the total number of student according to program in a faculty\n";
    std::cout << "\t\t3) Display the total number of student according to Semester\n";
    std::cout << "\t\t4) Exit\n\n";
}