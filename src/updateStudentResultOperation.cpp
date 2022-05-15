#include <iostream>
#include <string>
#include <limits>

void updateStudentResult()
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tUpdate Student Result\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Enter Student ID: ";
    std::string studentId;
    std::cin >> studentId;
    // Student *studentNode=studentList->searchNode(studentId);

    // if(studentNode!=NULL){}

    std::cout << "Course ID: ";
    std::string courseId;
    std::cin >> courseId;

    // Course *courseNode=courseList->searchNode(cousreId);
    // if(courseNode=!=NULL)
    std::cout << "New CGPA: ";
    double newCgpa{};
    std::cin >> newCgpa;
    // courseNode->updatedResult(newCgpa);

    std::cout << "Successfully Updated Result Student " + studentId << '\n';

    // else
    //  {
    //      std::cout << "Not Recorded Student\n";
    //  }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Press Enter to continue\n";
    std::cin.get();
}
