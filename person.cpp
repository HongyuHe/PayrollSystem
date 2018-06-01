#include "person.h"

Person::Person(int id, string name, int date, bool sex)
{
    m_id = id;
    m_name = name;
    m_date = date;
    m_sex = sex;
}

void Person::print()
{
    cout << "ID:"    << m_id << endl;
    cout << "Name:"    << m_name << endl;
    cout << "Date:"    << m_date << endl;
    if (!m_sex)
    {
         cout << "Sex:"    << "Man" << endl;
    }else
    {
         cout << "Sex:"    << "Woman" << endl;
    }
}

Person::~Person()
{
    //dtor
}

void Person::setID(int id)
{
    m_id = id;
}
int Person::getID(void) const
{
    return m_id;
}

void Person::setName(string name)
{
    m_name = name;
}
string Person::getName(void) const
{
    return m_name;
}

void Person::setDate(int date)
{
    m_date = date;
}
int Person::getDate(void) const
{
    return m_date;
}

void Person::setSex(bool sex)
{
    m_sex = sex;
}
bool Person::getSex(void) const
{
    return m_sex;
}
