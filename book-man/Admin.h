#pragma once
#include <string>
using namespace std;

class Admin {
public:
	string *name;
	string *pass;
	bool SetAdmin(string nameIn, string passIn);
	bool SellApproval(string nameIn, int price);
	Admin(string name, string pass);
	bool LoginStatus(string nameIn, string passIn);
};