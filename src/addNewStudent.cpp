#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"

// Add the new student to the student list
// 1. User input first name, last name, faculty, programme, year and semester
// 2. Create new student node
// 3. Add new student node to the studentList
void addNewStudent(StudentList *studentList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << "\t\t\t\t\tAdd New Student\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Input new Student Information:\n";

    // User input first name, last name, faculty, programme, year and semester
    std::cout << "First Name: ";
    std::string firstName;
    std::getline(std::cin >> std::ws, firstName);

    std::cout << "Last Name: ";
    std::string lastName{};
    std::getline(std::cin >> std::ws, lastName);

    std::cout << "Faculty: ";
    std::string faculty;
    std::getline(std::cin >> std::ws, faculty);

    std::cout << "Programme: ";
    std::string programme;
    std::getline(std::cin >> std::ws, programme);

    std::cout << "Year: ";
    int year;
    std::cin >> year;

    std::cout << "Semester: ";
    int semester;
    std::cin >> semester;

    // Create new student node and add to the studentList
    Student *newStudent = new Student(firstName, lastName, faculty, programme, year, semester);
    studentList->addNode(newStudent);
    std::cout << "Successfully Added New Student\n";

    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}