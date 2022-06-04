#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

#include "StudentList.h"
#include "Constants.h"

// Show the number of student according to faculty and semester
// 1. Get the name of the faculty
// 2. Get the semester
// 3. Search the number of student from the studenList by faculty and semester
// 4. Add the total number of student for each semester
// 5. Display result

void totalNumberOfStudentAccordingToSemester(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t  Total Number Of Student According To Semester\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "\n\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\tNo.\tFaculty";

    for (int i{0}; i < constants::semseter; i++)
    {
        std::cout << "\t Sem " << (i + 1);
    }
    std::cout << "\n\t\t------------------------------------------------------------\n";

    // Vector store the number of student for each semester
    std::vector<int> total(constants::semseter, 0);

    for (size_t i{0}; i < constants::faculty.size(); i++)
    {
        std::string facultyName = constants::faculty[i];
        std::cout << "\t\t\t" << i + 1 << ".\t" << facultyName;
        for (size_t semester{0}; semester < static_cast<size_t>(constants::semseter); semester++)
        {
            // total number of student each faculty by semester
            // same function as calculate the total number of student according to faculty
            int number = studentList->numberOfStudentAccordingToFaculty(facultyName, semester + 1);
            std::cout << "\t  " << number;
            // Calculate the total number of student for each semester
            total[semester] += number;
        }
        std::cout << '\n';
    }

    std::cout << "\t\t------------------------------------------------------------\n";

    std::cout << "\t\t\t\t"
              << "Total:";

    for (size_t semester{0}; semester < constants::semseter; semester++)
    {
        std::cout << "\t  " << total[semester];
    }
    std::cout << "\n\t\t------------------------------------------------------------\n";

    std::cout << '\n';
    std::cout << "Press Enter to continue\n";
    std::cin.get();
}