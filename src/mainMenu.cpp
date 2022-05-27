#include <iostream>

#include "StudentList.h"
#include "CourseList.h"

//  Function to get user operation
int getSelection(int numberOfChoice);
void mainMenuDisplay();

void studentProfileMenu(StudentList *studentList,CourseList *courseList);
void studentResultMenu(StudentList *studentList,CourseList *courseList);
void statisticsOfStudentMenu(StudentList *studentList);
void statisticsOfCourseMenu(StudentList *studentList,CourseList *courseList);


// 1. Display Main Menu
// 2. User input choose operation
void mainMenu(StudentList *studentList, CourseList *courseList)
{

    enum Operation
    {
        studentProfileMenuOperation = 1,
        studentResultMenuOperation,
        statisticOfStudentOperation,
        statisticOfCourseOperation,
        exitMenu,
    };

    int selection{};
    while (selection != exitMenu)
    {
        // system("CLS");
        mainMenuDisplay();

        selection = getSelection(exitMenu);
        switch (selection)
        {
        case studentProfileMenuOperation:
            studentProfileMenu(studentList,courseList);
            break;

        case studentResultMenuOperation:
            studentResultMenu(studentList,courseList);
            break;

        case statisticOfStudentOperation:
            statisticsOfStudentMenu(studentList);
            break;

        case statisticOfCourseOperation:
            statisticsOfCourseMenu(studentList,courseList);
            break;

        default:;
        }
    }
}