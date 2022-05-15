#include <iostream>
#include <string>
#include <limits>

void updateStudent()
{
    // system("CLS");
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tUpdate Student Data\n";
    std::cout << "\t\t============================================================\n\n";

    std::cout << "Enter Student ID: ";
    std::string studentId;
    std::cin >> studentId;
    // Student studentNode=studentList->searchNode(studentId);

    // if(studentNode!=NULL)

    std::cout << "First Name: ";
    std::string firstName;
    std::cin >> firstName;
    // studentNode->setFirstName(firstName);

    std::cout << "Last Name: ";
    std::string lastName{};
    std::cin >> lastName;
    // studentNode->setLastName(lastName);

    std::cout << "Faculty: ";
    std::string faculty;
    std::getline(std::cin >> std::ws, faculty);
    // newStudent->setFaculty(faculty);

    std::cout << "Programme: ";
    std::string programme;
    std::getline(std::cin >> std::ws, programme);
    // newStudent->setProgramme(programme);

    std::cout << "Successfully Update Student " << studentId << '\n';

    // else
    //  {
    //      std::cout << "Not Recorded Student\n";
    //  }

    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}