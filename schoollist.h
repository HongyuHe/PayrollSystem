#ifndef __SCHOOLLIST_H
#define __SCHOOLLIST_H

#include "node.h"

class SchoolList
{
public:
    SchoolList();
    virtual ~SchoolList();

    void print();
    void Insert(Person *);
    void Remove(int);

private:
    Node* m_head;
};

#endif // __SCHOOLLIST_H
