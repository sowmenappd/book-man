#pragma once
#include <iostream>
using namespace std;
class Menu
{
private:
public:
	void WelcomeMenu()
	{
		cout << "\n\n\tMENU";
		cout << "\n1.Login"
			<< "\n2.Quit" << endl;
	}
	void LoginMenu()
	{
		cout << "1.Login as Admin\n";
		cout << "2.Login as Student\n";
	}
	void AdminLoginMenu()
	{
		cout << "1.Entry of new book" << endl;
		cout << "2.Search for a book" << endl;
		cout << "3.Edit book entry" << endl;
		cout << "4.Log out" << endl;
		cout << "5.Quit" << endl;
	}
};