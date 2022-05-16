#include <iostream>

#include "StudentList.h"
#include "Student.h"

void mainMenu(StudentList *studentList);

// Main function start program
int main()
{
    // Initialize studentList
    StudentList *studentList = new StudentList();

    // Test Data
    // Need to delete at the end
    Student *studentNode1=new Student("A01234","f1","l1","fa1","H05",1);
    Student *studentNode2=new Student("B01234","f2","l2","fa1","H05",2);
    Student *studentNode3=new Student("C01234","f3","l3","fa2","H04",3);
    Student *studentNode4=new Student("D01234","f4","l4","fa2","H04",4);
    Student *studentNode5=new Student("E01234","f5","l5","fa3","H03",1);
    Student *studentNode6=new Student("F01234","f6","l6","fa3","H03",2);
    Student *studentNode7=new Student("G01234","f7","l7","fa4","H02",3);
    Student *studentNode8=new Student("H01234","f8","l8","fa5","H02",4);
    Student *studentNode9=new Student("A54321","f9","l9","fa5","H01",1);
    Student *studentNode10=new Student("A56789","f10","l10","fa5","H01",2);
    Student *studentNode11=new Student("A98765","f11","l11","fa1","H05",3);

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
    
    // Start Main Program function
    mainMenu(studentList);
    
    std::cout << "End Program\n";
    studentList->print();
    return 0;
}