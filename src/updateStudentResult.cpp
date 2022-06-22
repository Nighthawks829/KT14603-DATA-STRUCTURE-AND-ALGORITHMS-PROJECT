#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

#include "StudentList.h"
#include "CourseList.h"

// Update the student course result node in the course list
// 1. User input student id
// 2. Search the student node inside the studentList to check the existence of the student
// 3. User input course id
// 4. Search the course node inside the courseList to check the existence of the course in this student
// 5. User input new cgpa result in the return course node
// 6. Update the course node cgpa result

void updateStudentResult(StudentList *studentList, CourseList *courseList)
{
    system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << std::setw(65) << "Student Results Management System\n";
    std::cout << std::setw(58) << "Update Student Result\n";
    std::cout << "\t\t============================================================\n\n";

    // User input student id
    std::cout << "Enter Student ID: ";
    std::string studentId;
    std::cin >> studentId;
    Student *studentNode = studentList->searchNode(studentId);

    // Check the existence of the student in the studentList
    if (studentNode != NULL)
    {
        // Print the course list of the student
        courseList->print(studentId);
        std::cout << "Course ID: ";
        std::string courseId;
        std::cin >> courseId;
        Course *courseNode = courseList->searchNode(courseId);

        // Check the existence of the course in this courseList and check the existence of the student in the course node
        if (courseNode != NULL && courseNode->getStudentId() == studentId)
        {
            std::cout << "New CGPA: ";
            double newCgpa{};
            std::cin >> newCgpa;
            courseNode->setCgpa(newCgpa);

            std::cout << "Successfully Updated Result Student " + studentId << '\n';
        }
        else
        {
            std::cout << "Not Recorded Course\n";
        }
    }
    else
    {
        std::cout << "Not Recorded Student\n";
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Press Enter to continue\n";
    std::cin.get();
}
