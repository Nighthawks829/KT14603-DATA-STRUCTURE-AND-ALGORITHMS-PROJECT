#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "Constants.h"

// Show the number of student enroll in a programme according to faculty and semster
// 1. User input the programme id
// 2. Seach the number of student based on faculty, programme id and semester from studentList
// 3. Display the result

void totalNumberOfStudentAccordingToProgramme(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t  Total Number Of Student According To Programme\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "Programme ID: ";
    std::string programmeId;
    std::cin >> programmeId;
    // std::vector<int> total(constants::level.size(), 0);
    std::cout << "\t\t------------------------------------------------------------\n";
    std::cout << "\t\t\tNo.\tFaculty";

    for (int i{0}; i < constants::semseter; i++)
    {
        std::cout << "\t Sem " << (i + 1);
    }
    std::cout << "\n\t\t------------------------------------------------------------\n";

    for (size_t faculty{0}; faculty < constants::faculty.size(); faculty++)
    {
        std::string facultyName = constants::faculty[faculty];
        std::cout << "\t\t\t" << faculty + 1 << ".\t" << facultyName;

        for (int semster{0}; semster < constants::semseter; semster++)
        {
            // number of student by programme, faculty and semester
            int number = studentList->totalStudentAccordingToProgramme(facultyName, programmeId, semster + 1);
            std::cout << "\t  " << number;
        }
        std::cout << '\n';
    }

    std::cout << "\t\t------------------------------------------------------------\n";

    std::cout << "Press Enter to continue\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}