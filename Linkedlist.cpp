#include "LinkedList.h"

template<class A >
linkedlist<A >::linkedlist()
{
	start = NULL;
	Nodes<A >*p = start; 
    ifstream in;
    if(sizeof(A )==sizeof(Books))  //  checking size for storing object 
		in.open("BookData.bin", ios_base::binary);
	else if (sizeof(A )==sizeof(Player))
		in.open("PlayerData.bin", ios_base::binary);
	else 
		in.open("Data.bin", ios_base::binary);
    {
    	A  b;
        while(!in.eof())
        {
        	in.read(reinterpret_cast<char*>(&b), sizeof(A));
        	
        	
        	if(!in.eof())
        	insertEnd(b);        	
        } 
        in.close();
    }
}
template<class A >
linkedlist<A >::~linkedlist()
{
	ofstream out;
	if(sizeof(A )==sizeof(Books))
		out.open("BookData.bin", ios_base::binary);
	else if(sizeof(A )==sizeof(Player))
		out.open("PlayerData.bin", ios_base::binary);
	else
		out.open("PlayerData.bin", ios_base::binary);
	while(start!=NULL)
	{
		Nodes<A >*p=start;
		out.write((char *)(&(p->getData())),sizeof(p->getData()));
		start=start->getNext();
		delete p;
	}	
	out.close();
}
	
template<class A >
void linkedlist<A >::insertBeg(A  &data)
{
   Nodes<A >* temp= new Nodes<A >(data);
   temp->setNext(start);	
   start=temp;   
}
template<class A >
void linkedlist<A >::insertEnd(A  &data)
{
	Nodes<A >* temp= new Nodes<A >(data);
	if(start==NULL) 
	{
		start=temp;
		return;
	}
	
	Nodes<A >* p=start;
	while(p->getNext()!=NULL)
	{
		p=p->getNext();
	}
	p->setNext(temp);
}
template<class A >
void linkedlist<A >::insertPos(A  &data,int pos)
{
	Nodes<A >* temp= new Nodes<A >(data);
	if(start == NULL) 
	{
		start=temp;
		return;
	}
	if(pos==1)
	{
		temp->setNext(start);
		start = temp;
		return;
	}
	int i=1;
	Nodes<A >*p=start;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
		temp->setNext(p->getNext());	
		p->setNext(temp);
}
template<class A >
void linkedlist<A >::deleteBeg()
{
	Nodes<A >* p=start;
	if(start == NULL) 
	{
		cout<<"\n No Elements to Delete";
		return;
	}
		start=start->getNext();
		p->getData().display();
		delete p;	
}
template<class A >
void linkedlist<A >::deleteEnd()
{
	Nodes<A >* p=start;
	if(start == NULL) 
	{
		cout<<"\n No Elements to Delete";
		return;
	}
	while(p->getNext()->getNext()!=NULL)
	{
		p=p->getNext();
	}
		p->getNext()->getData().display();
		delete p->getNext();
		p->setNext(NULL);
}
template<class A >
bool linkedlist<A >::deletePos(Nodes<A >* &pos)
{
	if(start == NULL) 
	{
		cout<<"\n No Elements to Delete";
		return false;
	}
	Nodes<A >* p=start;
	if(start==pos)
	{
		start = start->getNext();
		delete p;
		return true;
	}
	while(p->getNext()!=pos)
	{
		p=p->getNext();
	}
	if(p->getNext()==pos)
	{
		Nodes<A >* q = p->getNext();
		p->setNext(q->getNext());
		delete q;
		return true;		
	}
	else
	{
		cout<<"Invalid Position";
		return false;
	}
}
template<class A >
void linkedlist<A >::display() 
{
		if(start == NULL)
		{
			cout<<"\n No element to display";
		}
		else
		{
			Nodes<A >* p=start;
			while(p!= NULL)
			{
				p->getData().display();
				p = p->getNext();
			}
		}
}
template<class A >
Nodes<A >* linkedlist<A >::searchById(int id) const
{
    Nodes<A >* p = start;
    while (p != NULL)
    {
        if (id == p->getData().getno())
        {
            return p; 
        }
        p = p->getNext();
    }
    return NULL; 
}
template<class A >
Nodes<A >* linkedlist<A >::searchByName(const char* name) 
{
    cout << "Search results:\n";
    Nodes<A >* p = start;
    while (p != NULL)
	{
        if (strcmp(p->getData().getname(), name) == 0) 
		{
            return p; 
        }
        p = p->getNext();
    }
	return NULL; 
}



template<class A >
void linkedlist<A >::updateRecords(Nodes<A >* &p)
{
        p->getData().updateRecords();
        return;
}