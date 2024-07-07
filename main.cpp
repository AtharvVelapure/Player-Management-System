#include "LinkedList.cpp"

int main()
{

	int c = 0;

    while (c != 10)
    {
    	
        cout << "\n\n\t1] Book Manegment System";
        cout << "\n\t2] Player Manegment System";
        cout << "\n\t10] Exit";
        cout << "\n\tEnter Your Choice >- ";
        cin >> c;

        switch (c)
        {
        case 1:
        {
            linkedlist<Books> Book;
            int c = 0;

            while (c != 10)
            {
                cout << "\n\n\t1. Insert the Book";
                cout << "\n\t2. Display";
                cout << "\n\t3. Delete Book";
                cout << "\n\t4. Searching";
                cout << "\n\t5. Update Book";
                cout << "\n\t10. Save & Exit";
                cout << "\n\tEnter Your Choice: ";
                cin >> c;

                switch (c)
                {
                case 1:
                {
                    int insertChoice;
                   	cout << "Select search for a book:\n";
                    cout << "1. Insert Book at Beginning\n";
                    cout << "2. Insert Book at End\n";
                    cout << "3. Insert Book at Pos\n";
                    cout << "Enter your choice: ";
                    cin >> insertChoice;

                    if (insertChoice == 1)
                    {
                        int id;
                        char name[100], author[100];
                        double rate, price;
                        cout << "Enter book details:\n";
                        cout << "ID: ";
                        cin >> id;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Author: ";
                        cin >> author;
                        cout << "Rating: ";
                        cin >> rate;
                        cout << "Price: ";
                        cin >> price;
                        Books b1(id, name, author, rate, price);


                        Book.insertBeg(b1);
                    }
                    else if (insertChoice == 2)
                    {
                        int id;
                        char name[100], author[100];
                        double rate, price;
                        cout << "Enter book details:\n";
                        cout << "ID: ";
                        cin >> id;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Author: ";
                        cin >> author;
                        cout << "Rating: ";
                        cin >> rate;
                        cout << "Price: ";
                        cin >> price;
                        Books b1(id, name, author, rate, price);

                        Book.insertEnd(b1);
                    }
                    else if (insertChoice == 3)
                    {
                        int id;
                        char name[100], author[100];
                        double rate, price;
                        cout << "Enter book details:\n";
                        cout << "ID: ";
                        cin >> id;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Author: ";
                        cin >> author;
                        cout << "Rating: ";
                        cin >> rate;
                        cout << "Price: ";
                        cin >> price;
                        Books b1(id, name, author, rate, price);

                        int pos;
                        cout << "\nEnter pos: ";
                        cin >> pos;
                        Book.insertPos(b1, pos);
                    }
                    else
                    {
                        cout << "Invalid choice.\n";
                    }
                }
                break;

                case 2:
                {
                	cout<< "| " << left << setw(8) << "ID" << "| " << left << setw(20) << "Book Name" << "| " 
					<< left << setw(20) << "Author Name" << "| " << setw(15) << fixed << setprecision(2) << "Rating " << "| " 
					<< setw(15) << fixed << setprecision(2) << "Price" << "|";
					
					cout << "\n-----------------------------------------------------------------------------------------\n";
                    
					Book.display();
                }
                break;

                case 3:
                {
                    int deleteChoice;
                    cout << "Select search for a book:\n";
                    cout << "1. Delete Book at Beginning\n";
                    cout << "2. Delete Book at End\n";
                    cout << "3. Delete Book at Pos\n";
                    cout << "Enter your choice: ";
                   	cin >> deleteChoice;

                    if (deleteChoice == 1)
                    {
                        Book.deleteBeg();
                        cout << "\nDelete Successfully";
                    }
                    else if (deleteChoice == 2)
                    {
                        Book.deleteEnd();
                        cout << "\nDelete Successfully";
                    }    
		            else if (deleteChoice == 3)
		            {
		            	int c;
			            cout<<"\n\tSelect Search Operation To Dlete Book\n";
			            cout<<"\t1.Search By ID \n\t2.Search By Name \nEnter Your Choice:- ";
			            cin>>c;
			            
		            switch(c)
		            {
		            	case 1:
		            	{
		            		int id;
		            		cout << "Enter book ID to delate: ";
		            		cin >> id;
		            		
		            		Nodes<Books>* pos = Book.searchById(id);
		                
		                	if (pos != NULL)
		                	{        
		                		pos->getData().display();
		                		Book.deletePos(pos);
		                		cout<<"\nDelete Succefully";
		                	}
		                	else
		                	{
		                   		cout << "Book ID not found.\n";
		                	}
		                	break;
						}
						case 2:
		            	{
		            		char name[20];
		            		cout << "Enter book Name to delete: ";
		            		cin >> name;
		            		
		            		Nodes<Books>* pos = Book.searchByName(name);
		                
		                	if (pos != NULL)
		                	{
		                   		pos->getData().display();
		                		Book.deletePos(pos);
		                		cout<<"\nDelete Succefully";
		                		
		                	}
		                	else
		                	{
		                   		cout << "Book Name not found.\n";
		                	}
		                	break;
						}
						default:
						{
							cout<<"\nInvalid Choice!";
							break;
						}
					}
		            break;
	            }
	            else
	            {
	                cout << "Invalid choice.\n";
	            }
        	}
	            break;
			case 4:
        {
            int searchChoice;
            cout << "Select search for a book:\n";
            cout << "1. Search by ID\n";
            cout << "2. Search by Name\n";
            cout << "3. Search by Author\n";
			cout << "Enter your choice: ";
            cin >> searchChoice;

            if (searchChoice == 1)
            {
                int id;
                cout << "Enter book ID to search: ";
                cin >> id;
                
                Nodes<Books>* p = Book.searchById(id);
                
                if (p != NULL)
                {
                    cout << "\nBook ID found.\n";
                	p->getData().display();
                }
                else
                {
                    cout << "Book ID not found.\n";
                }
            }
            else if (searchChoice == 2)
            {
                char name[100];
                cout << "Enter book name to search: ";
                cin.ignore();
                cin.getline(name, sizeof(name));
                
				Nodes<Books>* p = Book.searchByName(name);
                
                if(p!=NULL)
                {
                	p->getData().display();
				}  
            }
            

            else
            {
                cout << "Invalid choice.\n";
            }
            break;
        }
        case 5:
        {
            int c;
            cout<<"\n\tSelect Search Operation To Update Book\n";
            cout<<"\t1.Search By ID \n\t2.Search By Name \nEnter Your Choice:- ";
            cin>>c;
            
            switch(c)
            {
            	case 1:
            	{
            		int id;
            		cout << "Enter book ID to update: ";
            		cin >> id;
            		
            		Nodes<Books>* p = Book.searchById(id);
			        
                	if (p != NULL)
                	{                	
                		p->getData().display();
                		Book.updateRecords(p);
                	}
                	else
                	{
                   		cout << "Book ID not found.\n";
                	}
                	break;
				}
				case 2:
            	{
            		char name[20];
            		cout << "Enter book Name to update: ";
            		cin >> name;
            		
            		Nodes<Books>* p = Book.searchByName(name);
                
                	if (p != NULL)
                	{
                   		p->getData().display();
                		Book.updateRecords(p);
                		
                	}
                	else
                	{
                   		cout << "Book Name not found.\n";
                	}
                	break;
				}
				default:
				{
					cout<<"\nInvalid Choice!";
					break;
				}
			}
            break;
        }

		case 10:
			{
			 cout<<"\nExit the Book program.";
			}	
            break;
            default:
                cout<<"\nInvalid choice.";
		}
	}
}
break;

   case 2:
        {
            linkedlist<Player> Players;
            int c = 0;

            while (c != 10)
            {
                cout << "\n\n\t1. Insert the Player";
                cout << "\n\t2. Display";
                cout << "\n\t3. Delete Player";
                cout << "\n\t4. Searching";
                cout << "\n\t5. Update Player";
                cout << "\n\t10. Save & Exit";
                cout << "\n\tEnter Your Choice: ";
                cin >> c;

                switch (c)
                {
                case 1:
                {
                    int insertChoice;
                    std::cout << "Select search for a Player:\n";
                    std::cout << "1. Insert Player at Beginning\n";
                    std::cout << "2. Insert Player at End\n";
                    std::cout << "3. Insert Player at Pos\n";
                    std::cout << "Enter your choice: ";
                    std::cin >> insertChoice;

                    if (insertChoice == 1)
                    {
                        int jersey_number, run, wickets, matches_played;
                        char name[100];
                        cout << "Enter Player details:\n";
                        cout << "Jersey Number: ";
                        cin >> jersey_number;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Run: ";
                        cin >> run;
                        cout << "Wickets: ";
                        cin >> wickets;
                        cout << "Matches Played: ";
                        cin >> matches_played;
                        Player p1(jersey_number, name, run, wickets, matches_played);

                        Players.insertBeg(p1);
                    }
                    else if (insertChoice == 2)
                    {
                        int jersey_number, run, wickets, matches_played;
                        char name[100];
                        cout << "Enter Player details:\n";
                        cout << "Jersey Number: ";
                        cin >> jersey_number;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Run: ";
                        cin >> run;
                        cout << "Wickets: ";
                        cin >> wickets;
                        cout << "Matches Played: ";
                        cin >> matches_played;
                        Player p1(jersey_number, name, run, wickets, matches_played);

                        Players.insertEnd(p1);
                    }
                    else if (insertChoice == 3)
                    {
                        int jersey_number, run, wickets, matches_played;
                        char name[100];
                        cout << "Enter Player details:\n";
                        cout << "Jersey Number: ";
                        cin >> jersey_number;
                        cout << "Name: ";
                        cin >> name;
                        cout << "Run: ";
                        cin >> run;
                        cout << "Wickets: ";
                        cin >> wickets;
                        cout << "Matches Played: ";
                        cin >> matches_played;
                        Player p1(jersey_number, name, run, wickets, matches_played);

                        int pos;
                        cout << "\nEnter pos: ";
                        cin >> pos;
                        Players.insertPos(p1, pos);
                    }
                    else
                    {
                        cout << "Invalid choice.\n";
                    }
                }
                break;

                case 2:
                {
                	cout<< "| " << left << setw(8) << "Jersey" << "| " << left << setw(20) << "Name" << "| " 
					<< left << setw(20) << "Run" << "| " << setw(15) << fixed << setprecision(2) << "Wickets" << "| " 
					<< setw(15) << fixed << setprecision(2) << "Matches" << "|" << "\n";
					
					cout << "\n-----------------------------------------------------------------------------------------\n";
					
                    Players.display();
                }
                break;

                case 3:
                {
                    int deleteChoice;
                    cout << "Select search for a Player:\n";
                    cout << "1. Delete Player at Beginning\n";
                    cout << "2. Delete Player at End\n";
                    cout << "3. Delete Player at Pos\n";
                    cout << "Enter your choice: ";
                    cin >> deleteChoice;

                    if (deleteChoice == 1)
                    {
                        Players.deleteBeg();
                        cout << "\nDelete Successfully";
                    }
                    else if (deleteChoice == 2)
                    {
                        Players.deleteEnd();
                        cout << "\nDelete Successfully";
                    }	    
	            else if (deleteChoice == 3)
	            {
	            	int c;
		            cout<<"\n\tSelect Search Operation To Dlete Player\n";
		            cout<<"\t1.Search By ID \n\t2.Search By Name \nEnter Your Choice:- ";
		            cin>>c;
		            
		            switch(c)
		            {
		            	case 1:
		            	{
		            		int id;
		            		cout << "Enter Player ID to delate: ";
		            		cin >> id;
		            		
		            		Nodes<Player>* pos = Players.searchById(id);
		                
		                	if (pos != NULL)
		                	{                	
		                		pos->getData().display();
		                		Players.deletePos(pos);
		                		cout<<"\nDelete Succefully";
		                	}
		                	else
		                	{
		                   		cout << "Book ID not found.\n";
		                	}
		                	break;
						}
						case 2:
		            	{
		            		char name[20];
		            		cout << "Enter Player Name to delete: ";
		            		cin >> name;
		            		
		            		Nodes<Player>* pos = Players.searchByName(name);
		                
		                	if (pos != NULL)
		                	{
		                   		pos->getData().display();
		                		Players.deletePos(pos);
		                		cout<<"\nDelete Succefully";
		                		
		                	}
		                	else
		                	{
		                   		cout << "Book Player not found.\n";
		                	}
		                	break;
						}
						default:
						{
							cout<<"\nInvalid Choice!";
							break;
						}
					}
		            break;
	            }
	            else
	            {
	                cout << "Invalid choice.\n";
	            }
        	}
	            break;
			case 4:
        {
            int searchChoice;
            cout << "Select search for a Player:\n";
            cout << "1. Search by ID\n";
            cout << "2. Search by Name\n";
			cout << "Enter your choice: ";
            cin >> searchChoice;

            if (searchChoice == 1)
            {
                int id;
                cout << "Enter Player ID to search: ";
                cin >> id;
                
                Nodes<Player>* p = Players.searchById(id);
                
                if (p != NULL)
                {
                    cout << "\nPlayer ID found.\n";
                	p->getData().display();
                }
                else
                {
                    cout << "Player ID not found.\n";
                }
            }
            else if (searchChoice == 2)
            {
                char name[100];
                cout << "Enter Player name to search: ";
                cin.ignore();
                cin.getline(name, sizeof(name));
                
				Nodes<Player>* p = Players.searchByName(name);
                
                if(p!=NULL)
                {
                	p->getData().display();
				}  
            }
        	
            

            else
            {
                cout << "Invalid choice.\n";
            }
            break;
        }
        case 5:
        {
            int c;
            cout<<"\n\tSelect Search Operation To Update Player\n";
            cout<<"\t1.Search By ID \n\t2.Search By Name \nEnter Your Choice:- ";
            cin>>c;
            
            switch(c)
            {
            	case 1:
            	{
            		int id;
            		cout << "Enter Player ID to update: ";
            		cin >> id;
            		
            		Nodes<Player>* p = Players.searchById(id);
                
                	if (p != NULL)
                	{                	
                		p->getData().display();
                		Players.updateRecords(p);
                	}
                	else
                	{
                   		cout << "Player ID not found.\n";
                	}
                	break;
				}
				case 2:
            	{
            		char name[20];
            		cout << "Enter Player Name to update: ";
            		cin >> name;
            		
            		Nodes<Player>* p = Players.searchByName(name);
                
                	if (p != NULL)
                	{
                   		p->getData().display();
                		Players.updateRecords(p);
                		
                	}
                	else
                	{
                   		cout << "Player Name not found.\n";
                	}
                	break;
				}
				default:
				{
					cout<<"\nInvalid Choice!";
					break;
				}
			}
            break;
        }

		case 10:
			{
			 cout<<"\nExit the Player program.";
			}	
		
            break;
            default:
                cout<<"Invalid choice.";
	}
}
}
            break;
	case 10:
			{
			 cout<<"\nExit the program.";
			}	
		
            break;
            default:
                cout<<"Invalid choice.";
}
}
}




