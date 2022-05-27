#include <iostream>

#include "StudentList.h"

//  Function to get user operation
int getSelection(int numberOfChoise);
void statisticsOfStudentMenuDisplay();


void totalNumberOfStudentAccordingToFaculty(StudentList *studentList);
void totalNumberOfStudentAccordingToProgramme(StudentList *studentList);
void totalNumberOfStudentAccordingToSemester(StudentList *studentList);

// 1. Display Main Menu
// 2. User input choose operation
void statisticsOfStudentMenu(StudentList *studentList)
{
    enum Operation
    {
        totalNumberOfStudentAccordingToFacultyOperation = 1,
        totalNumberOfStudentAccordingToProgrammeOperation,
        totalNumberOfStudentAccordingToSemesterOperation,
        exit,
    };
    int selection{};
    while (selection != exit)
    {
        // system("CLS");
        statisticsOfStudentMenuDisplay();
        selection = getSelection(exit);
        switch (selection)
        {
        case totalNumberOfStudentAccordingToFacultyOperation:
            totalNumberOfStudentAccordingToFaculty(studentList);
            break;

        case totalNumberOfStudentAccordingToProgrammeOperation:
            totalNumberOfStudentAccordingToProgramme(studentList);
            break;

        case totalNumberOfStudentAccordingToSemesterOperation:
            totalNumberOfStudentAccordingToSemester(studentList);
            break;
        default:;
        }
    }
}
