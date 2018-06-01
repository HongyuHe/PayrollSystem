#include "schoollist.h"

SchoolList::SchoolList()
{
    m_head = NULL;
}

SchoolList::~SchoolList()
{
}

void SchoolList::print()
{
    Node *p = m_head;
    while(p)
    {
        p->getItem()->print();
        p=p->getNext();
    }
}

void SchoolList::Insert(Person* pn)
{
    Node* n= new Node(pn);

    if (!m_head)
    {
        m_head = n;
    }else
    {
        n->setNext(m_head);
        m_head = n;
    }
}

void SchoolList::Remove(int id)
{
    Node* p = m_head;
    if (m_head->getItem()->getID() == id)
    {
        m_head = p->getNext();
        delete p;
    }else
    {
        Node* prev = m_head;
        p = p->getNext();
        while(p)
        {
            if(p->getItem()->getID() == id)
            {
                prev->setNext(p->getNext());
                delete p;
                break;
            }else
            {
                prev = p;
                p=p->getNext();
            }
        }
    }
}
