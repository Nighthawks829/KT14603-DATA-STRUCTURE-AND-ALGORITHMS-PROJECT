#include <iostream>
#include <string>

#include "Student.h"
#include "StudentList.h"

void StudentList::print()
{
    while (head != NULL)
    {
        std::cout << head->getId() << '\n';
        std::cout << head->getFirstName() << '\n';
        std::cout << head->getLastName() << '\n';
        std::cout << head->getFaculty() << '\n';
        std::cout << head->getProgramme() << "\n";
        std::cout << head->getSemester()<<"\n\n";
        head = head->Next();
    }
}

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