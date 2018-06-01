#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>

using namespace std;

class Person
{
public:
    Person(int id, string name, int date, bool sex);
    virtual ~Person();

    virtual void print();

    void setID(int id);
    int getID(void) const;

    void setName(string name);
    string getName(void) const;

    void setDate(int date);
    int getDate(void) const;

    void setSex(bool sex);
    bool getSex(void) const;

private:
    int m_id;
    string m_name;
    int m_date;
    bool m_sex;
};

#endif // __PERSON_H
