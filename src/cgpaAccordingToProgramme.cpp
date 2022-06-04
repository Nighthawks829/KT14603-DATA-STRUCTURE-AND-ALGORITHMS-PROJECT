#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"
#include "Constants.h"

void cgpaAccordingToProgramme(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(66) << "Student Result According To Programme\n";
    std::cout << "\t\t============================================================\n";

    // std::cout << "Programme: ";
    // std::string Programme;
    // std::cin >> Programme;

    std::cout << "Semester: ";
    int semester{0};
    std::cin >> semester;

    std::cout << "\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\t\tNo."
              << "\tProgramme"
              << "\tCGPA\n";
    std::cout << "\t\t------------------------------------------------------------\n";

    double cgpa = 0.0;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    for (size_t i{0}; i < constants::programme.size(); i++)
    {
        std::cout << "\t\t\t\t" << i + 1 << '.';
        std::cout << "\t  " << constants::programme[i];
        cgpa = courseList->cgpaAccordingtoProgramme(studentList, constants::programme[i], semester);
        std::cout << "\t\t" << cgpa;
        std::cout << '\n';
    }

    std::cout << "\t\t------------------------------------------------------------\n";
    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}