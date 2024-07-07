#include "Player.h"

Player::Player()
{
    this->jNo = 0;
    strcpy(this->name, "Not Given");
    this->run = 0;
    this->wickets = 0;
    this->matches_played = 0;
}

Player::Player(int no, char *name, int run, int wickets, int matches_played)
{
    this->jNo = no;
    strcpy(this->name, name);
    this->run = run;
    this->wickets = wickets;
    this->matches_played = matches_played;
}

void Player::setno(int jnum)
{
    this->jNo = jnum;
}
void Player::setname(char *name)
{
    strcpy(this->name, name);
}

void Player::setrun(int run)
{
    cout<<"\n\t"<<this->run<<"  "<<run;
    this->run = run;
    cout<<"\n\t"<<this->run<<"  "<<run;
}

void Player::setwickets(int wi)
{
    this->wickets = wi;
}

void Player::setmatches_played(int numm)
{
    this->matches_played = numm;
}

int Player::getno()
{
    return this->jNo;
}

char* Player::getname()
{
    return this->name;
}

int Player::getrun()
{
    return this->run;
}

int Player::getwickets()
{
    return this->wickets;
}

int Player::getmatches_played()
{
    return this->matches_played;
}

void Player::display()
{
	cout<< "| " << left << setw(8) << this->jNo << "| " << left << setw(20) << this->name << "| " 
	<< left << setw(20) << this->run << "| " << setw(15) << fixed << setprecision(2) << this->wickets << "| " 
	<< setw(15) << fixed << setprecision(2) << this->matches_played << "|";
	cout << "\n-----------------------------------------------------------------------------------------\n";	
}

void Player::updateRecords()
{
   	int run, wickets;
	
    cout << "Enter new Runs of Player: ";
    cin >> run;
    this->setrun(run);

    cout << "Enter new Wickets for the Player: ";
    cin >> wickets;
    this->setwickets(wickets);    
}
