#include <iostream>
#include <string>

#include "Course.h"
#include "CourseList.h"

void Course::setNext(Course *next)
{
    m_next = next;
}

std::string Course::Data()
{
    return m_id;
}
Course *Course::Next()
{
    return m_next;
}

void Course::setId(std::string id)
{
    m_id = id;
}

void Course::setName(std::string name)
{
    m_name = name;
}

void Course::setCgpa(double cgpa)
{
    m_cgpa = cgpa;
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