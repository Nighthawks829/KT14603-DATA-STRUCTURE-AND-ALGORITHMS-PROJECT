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
    std::string m_studentId{};
    std::string m_id{};
    std::string m_name{};
    int m_semester{};
    double m_cgpa{};
    Course *m_next = NULL;

public:
    Course() {}
    Course(std::string id, std::string name, int semester, double cgpa)
        : m_id{id}, m_name{name}, m_semester{semester}, m_cgpa{cgpa}
    {
    }
    void setNext(Course *next);
    std::string Data();
    Course *Next();

    void setStudentId(std::string studentId);
    void setId(std::string id);
    void setName(std::string name);
    void setSemester(int semester);
    void setCgpa(double cgpa);

    std::string getStudentId();
    std::string getId();
    std::string getName();
    int getSemester();
    double getCgpa();

    Course(const Course &) = delete;            // copy constructor
    Course &operator=(const Course &) = delete; // override
};
#endif