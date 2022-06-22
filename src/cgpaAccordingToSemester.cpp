#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"
#include "Constants.h"

// Display statistic of the CGPA for each semester

void cgpaAccordingToSemester(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(66) << "Student Result According To Semester\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\n\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\t\tNo."
              << "\t Semester"
              << "\tCGPA\n";
    std::cout << "\t\t------------------------------------------------------------\n";

    double cgpa = 0.0;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    // Search and output the CGPA result for each semester
    for (size_t i{0}; i < constants::semseter; i++)
    {
        std::cout << "\t\t\t\t" << i + 1 << '.';
        std::cout << "\tSemester " << i + 1;
        cgpa = courseList->cgpaAccordingtoSemester(studentList, i + 1);
        std::cout << "\t" << cgpa;
        std::cout << '\n';
    }

    std::cout << "\t\t------------------------------------------------------------\n";

    std::cout << "Press Enter to continue\n";
    std::cin.get();
}