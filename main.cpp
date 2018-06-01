#include <iostream>

using namespace std;

#include "person.h"
#include "schoollist.h"
#include "student.h"
#include "staff.h"
#include "teacher.h"

#include "assistant.h"

int main()
{
    Assistant ass(004,"����",19850101,5,"19850101");
    Student stu(001,"��һ",19850101,0,3);
    Staff sta(002,"����",19701212,1,"����");
    Teacher tea(003,"����",19500212,0,500);

    SchoolList TestList;
    TestList.Insert(dynamic_cast<Person *>(&stu));
    TestList.Insert(dynamic_cast<Person *>(&sta));
    TestList.Insert(dynamic_cast<Person *>(&tea));
    TestList.Insert(dynamic_cast<Person *>(&ass));

    cout <<"Before Test Remove function:" <<endl;
    TestList.print();

    cout <<"\n\nAfter Test Remove function:" <<endl;
    TestList.Remove(002);
    TestList.print();

    return 0;
}
