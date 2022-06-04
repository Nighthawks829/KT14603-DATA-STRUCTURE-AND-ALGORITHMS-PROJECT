#include <iostream>
#include <string>
#include <limits>

#include "StudentList.h"
// 1. User input first name, last name, faculty, programme, year and semester
// 2. Create new student node 
// 3. Add new student node to the studentList
void addNewStudent(StudentList *studentList)
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\t\tAdd New Student\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Input new Student Information:\n";

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

    Student *newStudent = new Student(firstName,lastName,faculty,programme,year,semester);
    studentList->addNode(newStudent);
    std::cout << "Successfully Added New Student\n";

    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}