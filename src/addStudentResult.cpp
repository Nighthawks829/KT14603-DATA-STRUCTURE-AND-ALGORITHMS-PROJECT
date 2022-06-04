#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"
#include "Course.h"

// 1. User input student id
// 2. Search the node inside the studentList to check the existence of the student
// 3. User input the course id, course name and student cgpa
// 4. create new course node and update the new cousre node
// 5. Add the new couse node to the course list
// 6. User choose continue to add the new course or go out the loop

void addStudentResult(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(57) << "Add Student Result\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "Student ID: ";
    std::string studentId;
    std::cin >> studentId;

    Student *studentNode = studentList->searchNode(studentId);
    std::string continueAdd = "y";

    if (studentNode != NULL)
    {
        while (continueAdd == "y" || continueAdd == "Y")
        {

            Course *courseNode = new Course();
            courseNode->setStudentId(studentId);

            std::cout << "Course ID: ";
            std::string courseId;
            std::cin >> courseId;
            courseNode->setId(courseId);

            std::cout << "Course Name: ";
            std::string courseName;
            std::cin >> courseName;
            courseNode->setName(courseName);

            std::cout << "Semester: ";
            int semester;
            std::cin >> semester;
            courseNode->setSemester(semester);

            std::cout << "CGPA: ";
            double cgpa{};
            std::cin >> cgpa;
            courseNode->setCgpa(cgpa);

            std::cout << "Continue to add Result? (Y/N): ";
            std::cin >> continueAdd;

            courseList->addNode(courseNode);
        }
    }
    else
    {
        std::cout << "Not existed student\n";
    }

    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}