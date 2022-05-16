#include <iostream>
#include <string>
#include <limits>

#include "StudentList.h"

void deleteStudent(StudentList *studentList)
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
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
