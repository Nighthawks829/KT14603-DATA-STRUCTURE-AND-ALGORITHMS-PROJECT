#include <iostream>
#include <iomanip>

void studentProfileMenuDisplay()
{
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65)<<"Student Results Management System\n";
    std::cout <<"\t\t\t\t     Staff Profile Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t\t\t1) Add New Student\n";
    std::cout << "\t\t\t\t2) Update Student Data\n";
    std::cout << "\t\t\t\t3) Delete Student\n";
    std::cout << "\t\t\t\t4) Search Student\n";
    std::cout << "\t\t\t\t5) Exit To Main Menu\n\n";
}