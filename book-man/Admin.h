#pragma once
#include <string>
using namespace std;

class Admin {
	string pass;
public:
	string name;
	bool StoreAdmin;
	bool SetAdmin(string nameIn, string passIn);
	bool SellApproval(string nameIn, int price);
	Admin(string name, string pass);
};