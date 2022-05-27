#include <iostream>
#include <string>
#include <limits>

#include "StudentList.h"
#include "CourseList.h"
#include "Constants.h"

void cgpaAccordingToProgramme(StudentList *studentList, CourseList *courseList)
{
    std::cout << "\t\t============================================================\n";
    std::cout << "\t\t\tStudent Results Management System\n";
    std::cout << "\t\t\t\tView Statistics Of Student Menu\n";
    std::cout << "\t\t============================================================\n";

    std::cout << "Programme: ";
    std::string Programme;
    std::cin >> Programme;

    std::cout << "Semester: ";
    int semester{0};
    std::cin >> semester;
    // std::vector<int> total(constants::level.size(), 0);

    std::cout << "\t\t\tNo."
              << "\tProgramme"
              << "\t\tCGPA\n";
    std::cout << "\t\t\t----------------------------------------\n";

    // for(int i{0},i<constants::programme;i++)

    std::cout << "\t\t\t----------------------------------------\n";
    std::cout << "Press Enter to continue\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
    std::cout << studentList->head;
    std::cout << courseList->head;
}