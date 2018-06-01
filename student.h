#ifndef __STUDENT_H
#define __STUDENT_H

#include "person.h"

class Student: public Person
{
public:
    Student(int id,string name,int date,bool sex,int grade);
    virtual ~Student();

    void print();
private:
    int m_grade;
};

#endif // __STUDENT_H
