#include <iostream>
#include <string>
#include <limits>

void searchStudent()
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\t\tSearch Student\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Input Student ID: ";
    std::string staffId{};
    std::cin >> staffId;
    // Student *studentNode = studentList->searchNode(studentId);
    // if(studentNode!=NULL)
    std::cout << "\nStudent Details:\n";
    // std::cout << "ID: " << studentNode->getId() << '\n';
    // std::cout << "First Name: " << studentNode->getFirstName() << '\n';
    // std::cout << "Last Name: " << studentNode->getLastName() << '\n';

    // std::cout << "Faculty: " << studentNode->getFaculty() << '\n';
    // std::cout << "Programme: " << studentNode->getProgramme() << '\n';
    // studentNode->showCourse();

    // else
    //  std::cout<<"Not Recorded Student\n";

    std::cout << "Press Enter to continue\n";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}