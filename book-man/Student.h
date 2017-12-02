#pragma once
#include <string>

using namespace std;

class Student
{
private:
	string *pass;
	string *location;
	string *contact;
public:
	string *name;
	string *ID;
	bool buyOrder(Bookstore& bs, Book& bk);
	bool sellOrder();
	bool SetStudent(string nameIn, string id, string passIn, 
					string locationIn, string contactIn);
};