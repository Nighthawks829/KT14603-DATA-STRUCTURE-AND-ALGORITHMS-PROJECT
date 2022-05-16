#include <iostream>
#include <string>

#include "Student.h"
#include "Course.h"

void Student::setNext(Student *next)
{
    m_next = next;
}

std::string Student::Data()
{
    return m_id;
}

Student *Student::Next()
{
    return m_next;
}

void Student::setId(std::string id)
{
    m_id = id;
}

void Student::setFirstName(std::string firstName)
{
    m_firstName = firstName;
}

void Student::setLastName(std::string lastName)
{
    m_lastName = lastName;
}

void Student::setFaculty(std::string faculty)
{
    m_faculty = faculty;
}

void Student::setProgramme(std::string programme)
{
    m_programme = programme;
}

void Student::setSemester(int semester)
{
    m_semester = semester;
}

void Student::setCourseList(CourseList *courseList)
{
    m_courseList = courseList;
}

std::string Student::getId()
{
    return m_id;
}

std::string Student::getFirstName()
{
    return m_firstName;
}

std::string Student::getLastName()
{
    return m_lastName;
}

std::string Student::getFaculty()
{
    return m_faculty;
}

std::string Student::getProgramme()
{
    return m_programme;
}

int Student::getSemester()
{
    return m_semester;
}

CourseList *Student::getCourseList()
{
    return m_courseList;
}

void Student::showResult()
{
    Course *tmp = m_courseList->head;
    std::cout << "\nShow Student Result:\n";
    int i{1};
    while (tmp != NULL)
    {
        std::cout << i << ") " << tmp->getId() << '\t' << tmp->getName() << '\t' << tmp->getCgpa() << '\n';
        tmp->Next();
    }
    std::cout << '\n';
}