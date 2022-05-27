#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include <iostream>
#include <string>

#include "Student.h"
// #include "Course.h"
// #include "CourseList.h"

class StudentList
{
public:
    Student *head;

    void print();
    void addNode(Student *node);
    void deleteNode(std::string key);
    Student *searchNode(std::string key);

    int numberOfStudentAccordingToFaculty(std::string facultyName,int semester);
    int totalStudentAccordingToProgramme(std::string facultyName,std::string programmeId,int semester);
};

#endif