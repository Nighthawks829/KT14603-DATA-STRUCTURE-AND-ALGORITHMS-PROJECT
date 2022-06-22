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


// Mutator
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

void Student::setYear(int year)
{
    m_year = year;
}

void Student::setSemester(int semester)
{
    m_semester = semester;
}

// Accessor
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
int Student::getYear()
{
    return m_year;
}
int Student::getSemester()
{
    return m_semester;
}
