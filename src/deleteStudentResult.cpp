#include <iostream>
#include <string>
#include <limits>

void deleteStudentResult()
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\t\tDelete Student Result\n";
    std::cout << "\t\t============================================================\n\n";
    std::cout << "Student ID: ";
    std::string studentId;
    std::cin >> studentId;
    // Student *studentNode = studentList->searchNode(staffId);

    // if (studentNode != NULL)
    // {
    //     // studentList->deleteNode(studentId);
    std::cout << "Delete Course ID: ";
    std::string courseId;
    std::cin >> courseId;
    // Course *courseNode=studentNode->sesrchNode(courseId);
    // if(courseNode!=NULL);
    // studentNode->deleteCousre(cousreId);
    // }
    // else
    // {
    //     std::cout<<"Not Recorded Course\n";
    // }

    // }
    // else
    // {
    //     std::cout<<"Not Recorded Student\n";
    // }

    std::cout << "Successfully Delete Course " << courseId << '\n';
    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}