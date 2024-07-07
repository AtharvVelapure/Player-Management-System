#include"book.h"
#include"Player.h"
#ifndef nodes.h
#define nodes.h


template <class A>
class Nodes
{
    A data;
    Nodes<A>* next;

public:
    Nodes(A &);
    
    void setData(A &);
    
    A & getData();
    
    void setNext(Nodes<A> *);
    
    Nodes<A> * getNext();
};	

#endif

	