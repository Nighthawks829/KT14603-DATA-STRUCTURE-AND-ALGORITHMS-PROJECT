#include <iostream>
#include <string>

#include "Student.h"
#include "StudentList.h"

// Print the information for each student node
void StudentList::print()
{
    Student *tmp = head;
    while (tmp != NULL)
    {
        std::cout << tmp->getId() << '\n';
        std::cout << tmp->getFirstName() << '\n';
        std::cout << tmp->getLastName() << '\n';
        std::cout << tmp->getFaculty() << '\n';
        std::cout << tmp->getProgramme() << "\n";
        std::cout << tmp->getYear() << '\n';
        std::cout << tmp->getSemester() << "\n\n";
        tmp = tmp->Next();
    }
}

// Add a new student node to the student list
void StudentList::addNode(Student *node)
{
    Student *tmp = head;
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

// Delete a student node from the student list
void StudentList::deleteNode(std::string key)
{
    Student *temp = head;
    Student *prev = NULL;

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

// Search for a student node in the student list
Student *StudentList::searchNode(std::string key)
{
    Student *tmp = head;
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

// Calulate and return the number of students in the list according to the faculty and semester
int StudentList::numberOfStudentAccordingToFaculty(std::string facultyName, int semester)
{
    int numberStudent{0};
    Student *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->getFaculty() == facultyName && tmp->getSemester() == semester)
        {
            numberStudent += 1;
        }
        tmp = tmp->Next();
    }
    return numberStudent;
}

// Calulate and return the number of students in the list according to the programme in the faculty and semester
int StudentList::totalStudentAccordingToProgramme(std::string facultyName, std::string programmeId, int semester)
{
    int numberStudent{0};
    Student *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->getFaculty() == facultyName && tmp->getSemester() == semester && tmp->getProgramme() == programmeId)
        {
            numberStudent += 1;
        }
        tmp = tmp->Next();
    }
    return numberStudent;
}
