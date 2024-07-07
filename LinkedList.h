#include "Node.cpp"
#include <fstream>

template<class A>
class linkedlist
{	
	Nodes<A>* start;
	
	public:
		linkedlist();
		~linkedlist();
		
		void insertBeg(A &);
		void insertEnd(A &);
		void insertPos(A &,int);
		
		void deleteBeg();
		void deleteEnd();
		bool deletePos(Nodes<A>* &);
		
		Nodes<A>* searchById(int id) const;
		Nodes<A>* searchByName(const char* name);
		
		void updateRecords(Nodes<A>* &);
		
		void display();
};
