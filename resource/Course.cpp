#include <iostream>
#include <string>

#include "Course.h"
#include "CourseList.h"

std::string Course::Data()
{
    return m_id;
}
Course *Course::Next()
{
    return m_next;
}

// Mutator
void Course::setNext(Course *next)
{
    m_next = next;
}

void Course::setId(std::string id)
{
    m_id = id;
}

void Course::setStudentId(std::string studentId)
{
    m_studentId = studentId;
}

void Course::setName(std::string name)
{
    m_name = name;
}

void Course::setCgpa(double cgpa)
{
    m_cgpa = cgpa;
}

// Accessor
std::string Course::getStudentId()
{
    return m_studentId;
}

std::string Course::getId()
{
    return m_id;
}

std::string Course::getName()
{
    return m_name;
}

double Course::getCgpa()
{
    return m_cgpa;
}