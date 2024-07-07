#include "book.h"


	Books::Books()
	{
		jNo = 0;
		strcpy(name,"Not Given");
		strcpy(aname,"Not Given");
		rating = 0;   
		price = 0;
	}
	
	
	Books::Books(int n,char* bn,char* an,double r,double p)
	{
		jNo = n;
		strcpy(name,bn);
		strcpy(aname,an);
		rating = r;
		price = p;
	}
	
	
	Books::Books(Books& x) 
	{
	    jNo = x.jNo;
	    strcpy(name, x.name);
	    strcpy(aname, x.aname);
	    rating = x.rating;
	    price = x.price;
	}

	void Books::setno(int n)
	{
		jNo = n;
	}
	
	int Books::getno()
	{
		return jNo;
	}
	
	
	void Books::setname(char* bn)
	{
		strcpy(name,bn);
	}
	
	
	char* Books::getname()
	{
		return name;
	}
	
	
	void Books::setaname(char* an)
	{
		strcpy(aname,an);
	}
	
	
	char* Books::getaname()
	{
		return aname;
	}
	
	
	void Books::setbrate(double br)
	{
		rating = br;
	}
	
	
	double Books::getbrate()
	{
		return rating;
	}
	
	
	void Books::setbprice(double p)
	{
		price = p;
	}
	
	
	double Books::getbprice()
	{
		return price;
	}
	
	
    void Books::display()
	{
		
		cout << "| " << left << setw(8) << this->jNo << "| " << left << setw(20) << this->name << "| " << left << setw(20) << this->aname << "| " << setw(15) << fixed << setprecision(2) << this->rating << "| " << setw(15) << fixed << setprecision(2) << this->price << "|";
		cout << "\n-----------------------------------------------------------------------------------------\n";
	}
	
	
//	void operator<<(ostream &o,Books &b1)
//	{
//		b1.display();
//	}
	
	
void Books::updateRecords()
{
	int rating, price;
	
    cout << "Enter new Rating of Book: ";
    cin >> rating;
    this->setbrate(rating);

    cout << "Enter new Price for the Book: "; 
    cin >> price;
    this->setbprice(price);    
}
