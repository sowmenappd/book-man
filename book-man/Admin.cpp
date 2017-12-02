#include "Admin.h"
#include "Student.h"
bool Admin::SetAdmin(string nameIn, string passIn)
{
	*name = nameIn;
	*pass = passIn;
}

bool Admin::SellApproval(Student s,string nameIn, int price)
{
	if(s.sellOrder(nameIn, price))
	return false;
}

Admin::Admin(string nameIn, string passIn)
{
	*name = nameIn;
	*pass = passIn;
}

bool Admin::LoginStatus(string nameIn, string passIn)
{
	if (nameIn == *name && passIn == *pass)
		return true;
	else 
		return false;
}