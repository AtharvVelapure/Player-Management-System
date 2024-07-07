using namespace std;
#include <iostream>
#include <iomanip>
//#ifndef player.h
//#define player.h


class Player
{
	int jNo;
    char name[30];
    int run;
    int wickets;
    int matches_played;

	public:
	Player();
	Player(int, char*, int, int, int);
	Player(Player&);
	void setno(int);
	void setname(char *);
    void setrun(int);
    void setwickets(int);
    void setmatches_played(int);
    int getno();
    char *getname();
    int getrun();
    int getwickets();
    int getmatches_played();
    void updateRecords();
    void tdisplay();
	void display();
	
};










































//#endif


