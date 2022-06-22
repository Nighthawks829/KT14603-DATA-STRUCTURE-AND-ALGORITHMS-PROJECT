#include <iostream>

#include "StudentList.h"
#include "CourseList.h"

// Function to get user operation
int getSelection(int numberOfChoice);
void studentResultMenuDisplay();

void addStudentResult(StudentList *studentList, CourseList *courseList);
void updateStudentResult(StudentList *studentList, CourseList *courseList);
void deleteStudentResult(StudentList *studentList, CourseList *courseList);

// Student Result Menu
// 1. Display Main Menu
// 2. User input choose operation
void studentResultMenu(StudentList *studentList, CourseList *courseList)
{
    enum Operation
    {
        addStudentResultOperation = 1,
        updateStudentResultOperation,
        deleteStudentResultOperation,
        exit,
        maxOperation
    };

    int selection{};
    while (selection != exit)
    {
        system("CLS");
        studentResultMenuDisplay();
        selection = getSelection(maxOperation - 1);
        switch (selection)
        {
        case addStudentResultOperation:
            addStudentResult(studentList, courseList);
            break;

        case updateStudentResultOperation:
            updateStudentResult(studentList, courseList);
            break;

        case deleteStudentResultOperation:
            deleteStudentResult(studentList, courseList);
            break;

        default:
            break;
        }
    }
}