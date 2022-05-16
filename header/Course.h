#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

// #include "Student.h"
// #include "StudentList.h"
// #include "CourseList.h"

class Course
{
private:
    std::string m_id{};
    std::string m_name{};
    double m_cgpa{};
    Course *m_next = NULL;
    

public:
    Course() {}
    Course(std::string id, std::string name, double cgpa)
        : m_id{id}, m_name{name}, m_cgpa{cgpa}
    {
    }
    void setNext(Course *next);
    std::string Data();
    Course *Next();

    void setId(std::string id);
    void setName(std::string name);
    void setCgpa(double cgpa);

    std::string getId();
    std::string getName();
    double getCgpa();

    Course(const Course &) = delete;            // copy constructor
    Course &operator=(const Course &) = delete; // override
};
#endif