#include <iostream>

int getSelection(int numberOfChoice);
void statisticsOfCourseMenuDisplay();

void cgpaAccordingToFaculty();
void cgpaAccordingToProgramme();
void cgpaAccordingToSemester();

void statisticsOfCourseMenu()
{
    enum Operation
    {
        cgpaAccordingToFacultyOperation = 1,
        cgpaAccordingToProgrammeOperation,
        cgpaAccordingToSemesterOperation,
        exit,
    };

    int selection{};

    while (selection != exit)
    {
        // system("CLS");
        statisticsOfCourseMenuDisplay();
        selection = getSelection(exit);
        switch (selection)
        {
        case cgpaAccordingToFacultyOperation:
            cgpaAccordingToFaculty();
            break;

        case cgpaAccordingToProgrammeOperation:
            cgpaAccordingToProgramme();
            std::cout << "cgpaAccordingToProgrammeOperation";
            break;

        case cgpaAccordingToSemesterOperation:
            cgpaAccordingToSemester();
            std::cout << "cgpaAccordingToSemesterOperation";
            break;
        default:;
        }
    }
}