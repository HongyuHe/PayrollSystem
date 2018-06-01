#include "assistant.h"

Assistant::Assistant(int id,string name,int date,bool sex,string time)
        :Person(id,name,date,sex)
{
    m_time = time;
}

Assistant::~Assistant()
{
}

void Assistant::print()
{
    Person::print();
    cout <<"Time:" << m_time << endl;
}
