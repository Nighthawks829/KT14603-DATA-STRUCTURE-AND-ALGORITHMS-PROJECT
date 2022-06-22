#include <iostream>
#include <iomanip>

// Student Result Menu
void studentResultMenuDisplay()
{
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65)<<"Student Results Management System\n";
    std::cout << "\t\t\t\t     Student Result Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t\t\t1) Add New Student Result\n";
    std::cout << "\t\t\t\t2) Update Student Result\n";
    std::cout << "\t\t\t\t3) Delete Student Result\n";
    std::cout << "\t\t\t\t4) Exit To Main Menu\n\n";
}