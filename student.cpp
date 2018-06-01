#include "student.h"

Student::Student(int id,string name,int date,bool sex,int grade)
        :Person(id,name,date,sex)
{
    m_grade = grade;
}

Student::~Student()
{
    //dtor
}

void Student::print()
{
    Person::print();
    cout <<"Grade Point:" << m_grade << endl;
}
