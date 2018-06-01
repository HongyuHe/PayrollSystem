#ifndef __TEACHER_H
#define __TEACHER_H

#include "person.h"

class Teacher: public Person
{
public:
    Teacher(int id,string name,int date,bool sex,double fund);
    virtual ~Teacher();

    void print();

private:
    double m_fund;
};

#endif // __TEACHER_H
