#include "teacher.h"

Teacher::Teacher(int id,string name,int date,bool sex,double fund)
    :Person(id,name,date,sex)
{
    m_fund = fund;
}

Teacher::~Teacher()
{
}

void Teacher::print()
{
    Person::print();
    cout <<"Fund:" << m_fund << endl;
}
