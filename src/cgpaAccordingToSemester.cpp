#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"
#include "Constants.h"

void cgpaAccordingToSemester(StudentList *studentList, CourseList *courseList)
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tView Statistics Of Result Menu\n";
    std::cout << "\t\t============================================================\n";

    // for(int i{0};i<constants::semester.size();i++)
    std::cout << "\t\t\tNo."
              << "\tSemester"
              << "\tCGPA\n";
    std::cout << "\t\t\t----------------------------------------\n";

    double cgpa = 0.0;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    for (size_t i{0}; i < constants::semseter; i++)
    {
        std::cout << "\t\t\t" << i + 1 << '.';
        std::cout << "\tSemester " << i + 1;
        cgpa = courseList->cgpaAccordingtoSemester(studentList, i + 1);
        std::cout << "\t" << cgpa;
        std::cout << '\n';
    }

    std::cout << "\t\t\t----------------------------------------\n";

    std::cout << "Press Enter to continue\n";
    std::cin.get();
}