using namespace std;
#include <iostream>
#include <iomanip>
//#ifndef book.h
//#define book.h


class Books
{
	int jNo;
    char name[100];
    char aname[100];
    double rating;
    double price;
    
	public:
	Books();
	Books(int,char*,char*, double, double);
	Books(Books&);
	
	void setno(int);
	int getno();
	
	void setname(char*);
	char* getname();
	
	void setaname(char*);
	char* getaname();
	
	void setbrate(double);
	double getbrate();
	
	void setbprice(double);
	double getbprice();
	
	void updateRecords();
	void display();

};


//#endif


