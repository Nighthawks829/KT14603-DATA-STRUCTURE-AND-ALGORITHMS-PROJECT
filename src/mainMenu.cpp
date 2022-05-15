#include <iostream>

void mainMenuDisplay();
int getSelection(int numberOfChoice);

void studentProfileMenu();
void studentResultMenu();
void statisticsOfStudentMenu();
void statisticsOfCourseMenu();

void mainMenu()
{
    // StudentList *studentList=new StudentList();
    enum Operation
    {
        studentProfileMenuOperation = 1,
        studentResultMenuOperation,
        statisticOfStudentOperation,
        statisticOfCourseOperation,
        exitMenu,
        maxOperation
    };

    int selection{};
    while (selection != exitMenu)
    {
        // system("CLS");
        mainMenuDisplay();
        selection = getSelection(maxOperation-1);
        switch (selection)
        {
        case studentProfileMenuOperation:
            studentProfileMenu();
            // studentProfileMenu(studentList);
            break;

        case studentResultMenuOperation:
            studentResultMenu();
            // studentResultMenu(studentList);
            break;

        case statisticOfStudentOperation:
            statisticsOfStudentMenu();
            // statisticsOfStudentMenu(studentList);
            break;

        case statisticOfCourseOperation:
            statisticsOfCourseMenu();
            // statisticsOfCourseMenu(studentList);
            std::cout << "statisticOfCourse";
            break;

        default:;
        }
    }
}