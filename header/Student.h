#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

// #include "Course.h"
#include "CourseList.h"
// #include "StudentList.h"

class Student
{
private:
    std::string m_id{};
    std::string m_firstName{};
    std::string m_lastName{};
    std::string m_faculty{};
    std::string m_programme{};
    int m_semester{};
    Student *m_next = NULL;
    CourseList *m_courseList = new CourseList();

public:
    Student() {}
    Student(std::string id, std::string first, std::string last, std::string faculty, std::string programme, int semester)
        : m_id{id}, m_firstName{first}, m_lastName{last}, m_faculty{faculty}, m_programme{programme}, m_semester{semester}
    {
        // m_courseList = new CourseList();
    }

    void setNext(Student *next);
    std::string Data();
    Student *Next();

    void setId(std::string id);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setFaculty(std::string faculty);
    void setProgramme(std::string programme);
    void setSemester(int semester);
    void setCourseList(CourseList *courseList);

    std::string getId();
    std::string getFirstName();
    std::string getLastName();
    std::string getFaculty();
    std::string getProgramme();
    int getSemester();
    CourseList *getCourseList();

    void showResult();

    Student(const Student &) = delete;            // copy constructor
    Student &operator=(const Student &) = delete; // override
};

#endif