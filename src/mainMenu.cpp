#include <iostream>

#include "StudentList.h"

void mainMenuDisplay();
int getSelection(int numberOfChoice);

void studentProfileMenu(StudentList *studentList);
void studentResultMenu();
void statisticsOfStudentMenu();
void statisticsOfCourseMenu();

void mainMenu(StudentList *studentList)
{
    
    enum Operation
    {
        studentProfileMenuOperation = 1,
        studentResultMenuOperation,
        statisticOfStudentOperation,
        statisticOfCourseOperation,
        exitMenu,
        maxOperation
    };

    int selection{};
    while (selection != exitMenu)
    {
        // system("CLS");
        mainMenuDisplay();
        selection = getSelection(maxOperation - 1);
        switch (selection)
        {
        case studentProfileMenuOperation:
            studentProfileMenu(studentList);
            break;

        case studentResultMenuOperation:
            studentResultMenu();
            // studentResultMenu(studentList);
            break;

        case statisticOfStudentOperation:
            statisticsOfStudentMenu();
            // statisticsOfStudentMenu(studentList);
            break;

        case statisticOfCourseOperation:
            statisticsOfCourseMenu();
            // statisticsOfCourseMenu(studentList);
            std::cout << "statisticOfCourse";
            break;

        default:;
        }
    }
}