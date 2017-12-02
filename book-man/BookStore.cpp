#include "BookStore.h"
#include "Book.h"
void BookStore::show(Admin& admin, BookStore& bk)
{
	if (&admin != NULL & admin.LoginStatus(*admin.name, *bk.pass) == true)
	{
		for(int i = 0; ; i++)
			bk[i].ShowBook();
	}
}