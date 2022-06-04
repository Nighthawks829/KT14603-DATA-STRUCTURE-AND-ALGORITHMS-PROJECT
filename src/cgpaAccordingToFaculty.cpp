#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"
#include "Constants.h"

void cgpaAccordingToFaculty(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(66) << "Student Result According To Faculty\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "Semester: ";
    int semester{};
    std::cin >> semester;

    std::cout << "\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\t\tNo."
              << "\tFaculty"
              << "\t\tCGPA\n";
    std::cout << "\t\t------------------------------------------------------------\n";

    double cgpa = 0.0;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    for (size_t i{0}; i < constants::faculty.size(); i++)
    {
        std::cout << "\t\t\t\t" << i + 1 << '.';
        std::cout << "\t " << constants::faculty[i];
        cgpa = courseList->cgpaAccordingtoFaculty(studentList, constants::faculty[i], semester);
        std::cout << "\t\t" << cgpa;
        std::cout << '\n';
    }
    std::cout << "\t\t------------------------------------------------------------\n";

    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}