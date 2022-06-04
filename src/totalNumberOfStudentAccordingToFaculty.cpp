#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

#include "Constants.h"
#include "StudentList.h"

// Show the number of student according to faculty and semester
// 1. Get the name of the faculty
// 2. Get the semester
// 3. Search the number of student from the studenList by faculty and semester
// 4. Add the total number of student for each faculty
// 5. Calculate the total number of student in university
// 5. Display result

void totalNumberOfStudentAccordingToFaculty(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout  << "\t\t\t  Total Number Of Student According To Faculty\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\n\t\t------------------------------------------------------------\n";
    std::cout << "\t\tNo.\tFaculty";

    for (int i{0}; i < constants::semseter; i++)
    {
        std::cout << "\t Sem " << (i + 1);
    }
    std::cout << "\tTotal";
    std::cout << "\n\t\t------------------------------------------------------------\n";

    // total number of student in the university
    int totalStudent{0};
    for (size_t i{0}; i < constants::faculty.size(); i++)
    {
        // total number of student in each faculty
        int total{0};
        std::string facultyName = constants::faculty[i];
        std::cout << "\t\t" << i + 1 << ".\t " << facultyName;
        for (size_t semester{0}; semester < static_cast<size_t>(constants::semseter); semester++)
        {
            // total number of student in each faculty by semester
            int number = studentList->numberOfStudentAccordingToFaculty(facultyName, semester + 1);
            std::cout << "\t  " << number;
            // Calculate the number of student for each faculty for all semester
            total += number;
        }
        std::cout << "\t  " << total << '\n';
        // calculate total number of student in the university
        totalStudent += total;
    }
    std::cout << "\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\t\t\t\t  Total Student: " << totalStudent << '\n';
    std::cout << "\t\t------------------------------------------------------------\n";

    std::cout << "Press Enter to continue\n";
    std::cin.get();
}