#include "Admin.h"

bool Admin::SetAdmin(string nameIn, string passIn)
{
	name = nameIn;
	pass = passIn;
}

Admin::Admin(string nameIn, string passIn, int mode)
{
	name = nameIn;
	pass = passIn;
	type = mode;

	if (type == 1)
	{
		AppAdmin = true;
		StoreAdmin = false;
	}
	else
	{
		AppAdmin = false;
		StoreAdmin = true;
	}
}
