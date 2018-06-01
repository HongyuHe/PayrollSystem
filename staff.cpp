#include "staff.h"

Staff::Staff(int id,string name,int date,bool sex,string dept)
        :Person(id,name,date,sex)
{
    m_dept = dept;
}

Staff::~Staff()
{
}

void Staff::print()
{
    Person::print();
    cout <<"Dept:" << m_dept << endl;
}
