#include <iostream>

#include "StudentList.h"
#include "Student.h"
#include "CourseList.h"
#include "Course.h"

void mainMenu(StudentList *studentList, CourseList *courseList);

// Main function start program
int main()
{
    // Initialize studentList and courseList
    StudentList *studentList = new StudentList();
    CourseList *courseList = new CourseList();

    // Test Data
    // Need to delete at the end
    Student *studentNode1 = new Student("f1", "l1", "FPEP", "H05", 2012, 1);
    Student *studentNode2 = new Student("f2", "l2", "FPEP", "H05", 2011, 2);
    Student *studentNode3 = new Student("f3", "l3", "FKJ", "H04", 2012, 3);
    Student *studentNode4 = new Student("f4", "l4", "FSMP", "H04", 2010, 4);
    Student *studentNode5 = new Student("f5", "l5", "FSSK", "H03", 2009, 1);
    Student *studentNode6 = new Student("f6", "l6", "FPSK", "H03", 2008, 2);
    Student *studentNode7 = new Student("f7", "l7", "FPP", "H02", 2008, 3);
    Student *studentNode8 = new Student("f8", "l8", "FSSA", "H02", 2012, 4);
    Student *studentNode9 = new Student("f9", "l9", "FPL", "H01", 2010, 1);
    Student *studentNode10 = new Student("f10", "l10", "FKAL", "H01", 2012, 2);
    Student *studentNode11 = new Student("f11", "l11", "FPT", "H05", 2010, 3);

    studentList->addNode(studentNode1);
    studentList->addNode(studentNode2);
    studentList->addNode(studentNode3);
    studentList->addNode(studentNode4);
    studentList->addNode(studentNode5);
    studentList->addNode(studentNode6);
    studentList->addNode(studentNode7);
    studentList->addNode(studentNode8);
    studentList->addNode(studentNode9);
    studentList->addNode(studentNode10);
    studentList->addNode(studentNode11);

    Course *courseNode1 = new Course("HC01", "Course1", 1, 1.5);
    courseNode1->setStudentId(studentNode1->getId());
    courseList->addNode(courseNode1);

    Course *courseNode2 = new Course("HC02", "Course2", 2, 3);
    courseNode2->setStudentId(studentNode1->getId());
    courseList->addNode(courseNode2);

    Course *courseNode3 = new Course("HC03", "Course3", 3, 4.0);
    courseNode3->setStudentId(studentNode1->getId());
    courseList->addNode(courseNode3);

    


    // Start Main Menu Program function
    mainMenu(studentList, courseList);

    std::cout << "End Program\n";

    // Test function. Need to deleted at the end
    studentList->print();
    courseList->print(studentNode1->getId());
    return 0;
}