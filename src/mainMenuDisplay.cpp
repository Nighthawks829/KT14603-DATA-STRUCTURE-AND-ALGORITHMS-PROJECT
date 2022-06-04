#include <iostream>
#include <iomanip>

void mainMenuDisplay()
{
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t\t\tMain Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\t\t\t\t1) Student Profile Menu\n";
    std::cout << "\t\t\t\t2) Student Result Menu\n";
    std::cout << "\t\t\t\t3) View Statistics Of Student\n";
    std::cout << "\t\t\t\t4) View Statistics Of Course\n";
    std::cout << "\t\t\t\t5) Exit Program\n\n";
}