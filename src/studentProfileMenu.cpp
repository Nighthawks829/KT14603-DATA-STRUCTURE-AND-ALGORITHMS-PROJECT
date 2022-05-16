#include <iostream>
#include <limits>

#include "StudentList.h"

void studentProfileMenuDisplay();
void addNewStudent(StudentList *studentList);
void updateStudent(StudentList *studentList);
void deleteStudent(StudentList *studentList);
void searchStudent(StudentList *studentList);

int getSelection(int numberOfChoice);


void studentProfileMenu(StudentList *studentList)
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
            searchStudent(studentList);
            break;
        default:;
        }
    }
}