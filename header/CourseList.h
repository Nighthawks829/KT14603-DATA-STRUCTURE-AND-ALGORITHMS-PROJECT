#ifndef COURSELIST_H
#define COURSELIST_H

#include <iostream>
#include <string>

#include "Course.h"
#include "StudentList.h"


class CourseList
{
public:
    Course *head;

    void print(std::string studentId);
    void addNode(Course *node);
    void deleteNode(std::string key);
    Course *searchNode(std::string key);


    double cgpaAccordingtoSemester(StudentList *studentList,int sem);
    double cgpaAccordingtoProgramme(StudentList *studentList,std::string programme,int sem);
    double cgpaAccordingtoFaculty(StudentList *studentList,std::string faculty,int sem);
};

#endif