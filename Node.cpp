#include "Node.h"
	
	template <class A>
	Nodes<A>::Nodes(A & d)
	{
		data = d;
		next = NULL;
	}
	
	template <class A>
	void Nodes<A>::setData(A &d)
	{
		data = d;
	}
	
	template <class A>
	A & Nodes<A>::getData()
	{
		return data;
	}
	
	template <class A>
	void Nodes<A>::setNext(Nodes<A>* n)
	{
		next = n;
	}
	
	template <class A>
	Nodes<A>* Nodes<A>::getNext()
	{
		return next;
	}
	


