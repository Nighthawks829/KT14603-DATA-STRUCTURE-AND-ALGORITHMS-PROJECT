#ifndef COURSELIST_H
#define COURSELIST_H

#include <iostream>
#include <string>

#include "Course.h"

class CourseList
{
public:
    Course *head;

    void print(std::string studentId);
    void addNode(Course *node);
    void deleteNode(std::string key);
    Course *searchNode(std::string key);

};

#endif