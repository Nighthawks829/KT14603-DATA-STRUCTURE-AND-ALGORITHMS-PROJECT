#include <iostream>

int getSelection(int numberOfChoice);
void studentResultMenuDisplay();
void addStudentResult();
void updateStudentResult();
void deleteStudentResult();


void studentResultMenu()
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
        // system("CLS");
        studentResultMenuDisplay();
        selection = getSelection(maxOperation - 1);
        switch (selection)
        {
        case addStudentResultOperation:
            addStudentResult();
            break;

        case updateStudentResultOperation:
            updateStudentResult();
            break;

        case deleteStudentResultOperation:
            deleteStudentResult();
            std::cout << "deleteStudentResultOperation()\n";
            break;

        default:
            break;
        }
    }
}