#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

#include "Course.h"
// #include "CourseList.h"
// #include "StudentList.h"

class Student
{
private:
    std::string m_id{};
    std::string m_firstName{};
    std::string m_lastName{};
    std::string m_faculty{};
    std::string m_programme{};
    int m_year{};
    int m_semester{};
    // CourseList *m_courseList = NULL;
    Student *m_next = NULL;
    static int inline idNumber{1};

public:
    Student() {}
    Student(std::string firstName, std::string lastName, std::string faculty, std::string programme, int year, int semester)
        : m_firstName{firstName}, m_lastName{lastName}, m_faculty{faculty}, m_programme{programme}, m_year{year}, m_semester{semester}
    {
        m_id = faculty + std::to_string(year) + std::to_string(1000 + idNumber);
        idNumber += 1;
    }

    void setNext(Student *next);
    std::string Data();
    Student *Next();

    // void setId(std::string id);
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setFaculty(std::string faculty);
    void setProgramme(std::string programme);
    void setYear(int year);
    void setSemester(int semester);
    // void setCourseList(CourseList *courseList);

    std::string getId();
    std::string getFirstName();
    std::string getLastName();
    std::string getFaculty();
    std::string getProgramme();
    int getYear();
    int getSemester();
    // CourseList *getCourseList();

    void addCourse(Course *course);

    Student(const Student &) = delete;            // copy constructor
    Student &operator=(const Student &) = delete; // override
};

#endif