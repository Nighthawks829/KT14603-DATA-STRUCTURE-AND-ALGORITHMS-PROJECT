#include <iostream>

#include "StudentList.h"
#include "CourseList.h"

int getSelection(int numberOfChoice);
void statisticsOfCourseMenuDisplay();

void cgpaAccordingToFaculty(StudentList *studentList, CourseList *courseList);
void cgpaAccordingToProgramme(StudentList *studentList, CourseList *courseList);
void cgpaAccordingToSemester();

// 1. Display Main Menu
// 2. User input choose operation
void statisticsOfCourseMenu(StudentList *studentList, CourseList *courseList)
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
            // cgpaAccordingToFaculty(studentList, courseList);
            break;

        case cgpaAccordingToProgrammeOperation:
            // cgpaAccordingToProgramme(studentList, courseList);
            break;

        case cgpaAccordingToSemesterOperation:
            // cgpaAccordingToSemester();
            break;
        default:;
        }
    }
    // Need to deleted at the end
    std::cout << studentList->head;
    std::cout << courseList->head;
}