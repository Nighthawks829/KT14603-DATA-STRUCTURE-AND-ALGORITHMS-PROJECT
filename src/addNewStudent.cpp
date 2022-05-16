#include <iostream>
#include <string>
#include <limits>

#include "StudentList.h"
#include "CourseList.h"

void addNewStudent(StudentList *studentList)
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\t\tAdd New Student\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Input new Student Information:\n";
    std::cout << "ID: ";
    std::string id;
    std::cin >> id;

    Student *studentNode = studentList->searchNode(id);

    if (studentNode == NULL)
    {
        Student *newStudent = new Student();
        newStudent->setId(id);
        std::cout << "First Name: ";
        std::string firstName;
        std::getline(std::cin >> std::ws, firstName);
        newStudent->setFirstName(firstName);

        std::cout << "Last Name: ";
        std::string lastName{};
        std::getline(std::cin >> std::ws, lastName);
        newStudent->setLastName(lastName);

        std::cout << "Faculty: ";
        std::string faculty;
        std::getline(std::cin >> std::ws, faculty);
        newStudent->setFaculty(faculty);

        std::cout << "Programme: ";
        std::string programme;
        std::getline(std::cin >> std::ws, programme);
        newStudent->setProgramme(programme);

        std::cout << "Semester: ";
        int semester;
        std::cin >> semester;
        newStudent->setSemester(semester);

        CourseList *courseList = new CourseList();
        newStudent->setCourseList(courseList);
        studentList->addNode(newStudent);
        std::cout << "Successfully Added New Student\n";
    }
    else
    {
        std::cout << "Error! Student " << id << " already exist in the list\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}