#include <iostream>
#include <limits>

#include "StudentList.h"
#include "CourseList.h"

// Function to get user input
int getSelection(int numberOfChoice);
void studentProfileMenuDisplay();

void addNewStudent(StudentList *studentList);
void updateStudent(StudentList *studentList);
void deleteStudent(StudentList *studentList);
void searchStudent(StudentList *studentList, CourseList *courseList);

// 1. Display menu
// 2. User input choose operation
void studentProfileMenu(StudentList *studentList, CourseList *courseList)
{
    enum Operation
    {
        addNewStudentOperation = 1,
        updateStudentOperation,
        deleteStudentOperation,
        searchStudentOperation,
        exitMenu,
        maxOperation,
    };
    int selection{};
    while (selection != exitMenu)
    {
        // system("CLS");
        studentProfileMenuDisplay();
        selection = getSelection(maxOperation - 1);
        switch (selection)
        {
        case addNewStudentOperation:
            addNewStudent(studentList);
            break;

        case updateStudentOperation:
            updateStudent(studentList);
            break;

        case deleteStudentOperation:
            deleteStudent(studentList);
            break;

        case searchStudentOperation:
            searchStudent(studentList, courseList);
            break;
        default:;
        }
    }
}