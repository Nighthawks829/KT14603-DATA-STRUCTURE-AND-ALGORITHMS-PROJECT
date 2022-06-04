#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"

// 1. User input student id
// 2. Search the node inside the studentList to check the existence of the student
// 3. If the node exist delete the node from the list

void deleteStudent(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t\t\tDelete Student\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Delete Student ID: ";
    std::string studentId;
    std::cin >> studentId;

    Student *studentNode = studentList->searchNode(studentId);

    if (studentNode != NULL)
    {
        studentList->deleteNode(studentId);
        std::cout << "Successfully Delete Student " << studentId << '\n';
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
