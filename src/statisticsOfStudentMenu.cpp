#include <iostream>

int getSelection(int numberOfChoise);
void statisticsOfStudentMenuDisplay();


void totalNumberOfStudentAccordingToFaculty();
void totalNumberOfStudentAccordingToProgramme();
void totalNumberOfStudentAccordingToSemester();

void statisticsOfStudentMenu()
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
            totalNumberOfStudentAccordingToFaculty();
            break;

        case totalNumberOfStudentAccordingToProgrammeOperation:
            totalNumberOfStudentAccordingToProgramme();
            break;

        case totalNumberOfStudentAccordingToSemesterOperation:
            totalNumberOfStudentAccordingToSemester();
            break;
        default:;
        }
    }
}
