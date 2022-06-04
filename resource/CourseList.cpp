#include <iostream>
#include <string>

#include "Course.h"
#include "CourseList.h"

void CourseList::print(std::string studentId)
{

    Course *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->getStudentId() == studentId)
        {
            std::cout << "Course ID: " << tmp->getId() << '\n';
            std::cout << "Course Name: " << tmp->getName() << '\n';
            std::cout << "CGPA: " << tmp->getCgpa() << "\n\n";
        }
        tmp = tmp->Next();
    }
}

void CourseList::addNode(Course *node)
{
    // Create a new node
    // Create a temp pointer
    Course *tmp = head;
    node->setNext(NULL);
    if (tmp != NULL)
    {
        // Nodes already present in the list
        while (tmp->Next() != NULL)
        {
            tmp = tmp->Next();
        }
        // Point the last node to the new node
        tmp->setNext(node);
    }
    else
    {
        // First node in the list
        head = node;
    }
}

void CourseList::deleteNode(std::string key)
{
    Course *temp = head;
    Course *prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->getId() == key)
    {
        head = temp->Next();
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->getId() != key)
        {
            prev = temp;
            temp = temp->Next();
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Remove the node
        prev->setNext(temp->Next());

        // Free memory
        delete temp;
    }
}

Course *CourseList::searchNode(std::string key)
{
    Course *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->getId() == key)
        {
            return tmp;
        }
        tmp = tmp->Next();
    }
    return NULL;
}

double CourseList::cgpaAccordingtoSemester(StudentList *studentList, int sem)
{
    Course *tmp = head;
    double total = 0.0;
    int number = 0;

    while (tmp != NULL)
    {
        Student *node = studentList->searchNode(tmp->getStudentId());
        if (node->getSemester() == sem)
        {
            total += tmp->getCgpa();
            number += 1;
        }
        tmp = tmp->Next();
    }
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return total / number;
    }
}

double CourseList::cgpaAccordingtoProgramme(StudentList *studentList, std::string programme, int sem)
{
    Course *tmp = head;
    double total = 0.0;
    int number = 0;

    while (tmp != NULL)
    {
        Student *node = studentList->searchNode(tmp->getStudentId());
        if (node->getSemester() == sem && node->getProgramme() == programme)
        {
            total += tmp->getCgpa();
            number += 1;
        }
        tmp = tmp->Next();
    }
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return total / number;
    }
}

double CourseList::cgpaAccordingtoFaculty(StudentList *studentList, std::string faculty, int sem)
{
    Course *tmp = head;
    double total = 0.0;
    int number = 0;

    while (tmp != NULL)
    {
        Student *node = studentList->searchNode(tmp->getStudentId());
        if (node->getSemester() == sem && node->getFaculty() == faculty)
        {
            total += tmp->getCgpa();
            number += 1;
        }
        tmp = tmp->Next();
    }
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return total / number;
    }
}
