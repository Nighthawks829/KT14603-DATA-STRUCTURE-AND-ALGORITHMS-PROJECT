#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"

// Search student and display the student information and course result by inputting student id
// 1. User input student id
// 2. Search the node inside the studentList to check the existence of the student
// 3. If the node exist print the information of the return node
// 4. Print the result of student from the courseList

void searchStudent(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t\t\tSearch Student\n";
    std::cout << "\t\t============================================================\n\n";

    // User input student id
    std::cout << "Input Student ID: ";
    std::string studentId{};
    std::cin >> studentId;
    Student *studentNode = studentList->searchNode(studentId);

    // Check the existence of the student in the studentList
    if (studentNode != NULL)
    {
        // Print the information of the student node
        std::cout << "\nStudent Details:\n";
        std::cout << "ID: " << studentId << '\n';
        std::cout << "First Name: " << studentNode->getFirstName() << '\n';
        std::cout << "Last Name: " << studentNode->getLastName() << '\n';

        std::cout << "Faculty: " << studentNode->getFaculty() << '\n';
        std::cout << "Programme: " << studentNode->getProgramme() << '\n';
        std::cout << "Year: " << studentNode->getYear() << '\n';
        std::cout << "Semester: " << studentNode->getSemester() << "\n\n";

        // Print the result of student from the courseList
        courseList->print(studentId);
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