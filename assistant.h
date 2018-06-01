#ifndef __ASSISTANT_H
#define __ASSISTANT_H

#include <iostream>
#include "person.h"

using namespace std;
class Assistant: public Person
{
public:
    Assistant(int id,string name,int date,bool sex,string time);
    virtual ~Assistant();

    void print();

private:
    string m_time;
};

#endif // __ASSISTANT_H

