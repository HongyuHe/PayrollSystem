#ifndef __STAFF_H
#define __STAFF_H

#include "person.h"

class Staff: public Person
{
public:
    Staff(int id,string name,int date,bool sex,string dept);
    virtual ~Staff();

    void print();

private:
    string m_dept;
};

#endif // __STAFF_H
