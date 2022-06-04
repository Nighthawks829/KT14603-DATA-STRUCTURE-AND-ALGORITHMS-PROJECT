#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"

// 1. User input student id
// 2. Search the node inside the studentList to check the existence of the student
// 3. User input student new information
// 4. update the node return from the list

void updateStudent(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(57) << "Update Student Data\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Enter Student ID: ";
    std::string studentId;
    std::cin >> studentId;

    Student *studentNode = studentList->searchNode(studentId);

    if (studentNode != NULL)
    {
        std::cout << "First Name: ";
        std::string firstName;
        std::getline(std::cin >> std::ws, firstName);
        studentNode->setFirstName(firstName);

        std::cout << "Last Name: ";
        std::string lastName{};
        std::getline(std::cin >> std::ws, lastName);
        studentNode->setLastName(lastName);

        std::cout << "Faculty: ";
        std::string faculty;
        std::getline(std::cin >> std::ws, faculty);
        studentNode->setFaculty(faculty);

        std::cout << "Programme: ";
        std::string programme;
        std::getline(std::cin >> std::ws, programme);
        studentNode->setProgramme(programme);

        std::cout << "Year: ";
        int year{};
        std::cin >> year;
        studentNode->setYear(year);

        std::cout << "Semester: ";
        int semester{};
        std::cin >> semester;
        studentNode->setSemester(semester);

        std::cout << "Successfully Update Student " << studentId << '\n';
    }
    else
    {
        std::cout << "Not Recorded Student\n";
    }

    std::cout << "Press Enter to continue\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}