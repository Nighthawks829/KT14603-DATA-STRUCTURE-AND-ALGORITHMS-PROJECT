#include <iostream>
#include <limits>

void studentProfileMenuDisplay();
void updateStudent();
void deleteStudent();
void searchStudent();

int getSelection(int numberOfChoice);

void addNewStudent();

void studentProfileMenu()
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
            addNewStudent();
            break;

        case updateStudentOperation:
            updateStudent();
            break;

        case deleteStudentOperation:
            deleteStudent();
            break;

        case searchStudentOperation:
            searchStudent();
            break;
        default:;
        }
    }
}