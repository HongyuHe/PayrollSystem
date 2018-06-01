#ifndef __NODE_H
#define __NODE_H

#include <iostream>
#include "person.h"

using namespace std;

class Node
{
public:
    Node(Person* p);
    Node(const Node &n);
    virtual ~Node();

    void setItem(Person *p);
    Person *getItem(void) const;

    void setNext(Node *n);
    Node *getNext(void) const;

private:
    Person* m_item;
    Node *m_next;
};

#endif // __NODE_H
