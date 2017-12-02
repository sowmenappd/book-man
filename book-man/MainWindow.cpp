// starting our project
#include <iostream>
#include <fstream>
#include <string>
#include "iomanip"
#include "Menu.h"
#include "Book.h"
#include "Admin.h"
#include "BookStore.h"
#include "Database.h"
#include "Student.h"




using namespace std;
// LAST_INDEX = 0;
bool AdminLogStatus = false;

int main()
{
	Menu menu;
	Book books[100];
	int position = 0;
	Admin admin("admin", "admin");
	Database db;
	BookStore bs;
	
	while (1)
	{
		menu.WelcomeMenu();
	}
	string cmd;
	cin >> cmd;
	system("clear");
	if (cmd == "1")
	{
		menu.LoginMenu();
		int cmd;
		cin >> cmd;
		char *name, *pass;
		if (cmd == 1)
		{
			system("clear");
			cout << "Enter username: ";
			cin >> name;
			cout << "Enter password: ";
			cin >> pass;
			system("clear");
			if (admin.LoginStatus(name, pass))
			{
				menu.AdminLoginMenu();
				cout << "Enter Number from 1 to 5" << endl;
				cin >> cmd;
					switch (cmd)
					{
					case 1:
						while (1)
						{
							books[position++].GetBook();
							cout << "Enter again? Y/N " << endl;
							char c;
							cin >> c;
							if (c == 'Y' || c == 'y')
								books[position++].GetBook();
							else break;
						}
						break;
					case 2:
						while (1)
						{
							Book bk;
							bk.SetBookInfo();
							for (int i = 0; i < position; i++)
							{
								if (bk.SearchBook(books[i].name, books[i].author)) {
									cout << "Book found in database!" << endl;
								}
								else
									cout << "Book not in our database." << endl;

							}
							cout << "Search again? Y/N" << endl;
							char c;
							cin >> c;
							if (c == 'n' || c == 'N')
								break;
						}
						break;
					case 3:
						while (1)
						{
							Book bk;
							bk.SetBookInfo();
							int i;
							for (i = 0; i < position; i++)
							{
								if (bk.SearchBook(books[i].name, books[i].author)) {
									cout << "Book found in database!" << endl;
									break;
								}
								else
									cout << "Book not in our database." << endl;
							}
							if (i < position)
								books[i].GetBook();
							cout << "Edit more books? Y/N" << endl;
							char c;
							cin >> c;
							if (c == 'n' || c == 'N')
								break;
						}
						break;
					case 4:
						cout << "Logged out." << endl;
						getchar();
						system("clear");
						menu.LoginMenu();
						break;
					case 5:
						system("clear");
						cout << "Quitting..." << endl;
						getchar();
						return 0;
						break;
					default:
						cout << "Strange!!! What I've told you?" << endl;	//important line
						break;
					}
				}
			}
			else
			{
				cout << "Login failed!" << endl;
				return 0;
			}
		}

	
	else
		return 0;
	//return 0;
}