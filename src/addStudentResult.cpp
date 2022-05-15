#include <iostream>
#include <string>
#include <limits>

void addStudentResult()
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tStudent Result Menu\n";
    std::cout << "\t\t============================================================\n";

    // CourseList *courseList=new CourseList();

    std::cout << "Student ID: ";
    std::string studentId;
    std::cin >> studentId;

    // Student *node=new studentList->search(studendId);

    // if(node!=NULL)

    std::string continueAdd = "y";

    while (continueAdd == "y" || continueAdd == "Y")
    {
        std::cout << "Semester: ";
        std::string semester;
        std::cin >> semester;

        std::cout << "Course ID: ";
        std::string courseId;
        std::cin >> courseId;

        std::cout << "Course Name: ";
        std::string courseName;
        std::cin >> courseName;

        std::cout << "CGPA: ";
        double cgpa{};
        std::cin >> cgpa;

        std::cout << "Continue to add Result? (Y/N): ";
        std::cin >> continueAdd;
    }
    // else{
    //     std::cout<<"Not existed student\n";
    // }

    std::cout<<"Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}