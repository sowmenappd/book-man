#pragma once
#include <iostream>
#include <string>
using namespace std;

class Admin {
	string pass;
public:
	string name;
	int type;
	bool AppAdmin;
	bool StoreAdmin;
	bool SetAdmin(string name, string pass);
	Admin(string name, string pass, int mode);
};