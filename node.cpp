#include "node.h"

Node::Node(Person* p)
{
    m_item = p;
    m_next = NULL;
}

Node::Node(const Node &n)
{
    setItem(n.getItem());
    setNext(n.getNext());
}

Node::~Node()
{
}

void Node::setItem(Person *p)
{
    if(m_item != NULL)
    {
        delete m_item;
        m_item = NULL;
    }

    *m_item = *p;
}
Person *Node::getItem(void) const
{
    return m_item;
}

void Node::setNext(Node *n)
{
    if(m_next != NULL)
    {
        delete m_next;
        m_next = NULL;
    }

    m_next = n;
}
Node *Node::getNext(void) const
{
    return m_next;
}
