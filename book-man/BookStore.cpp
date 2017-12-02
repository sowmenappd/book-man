#include "BookStore.h"
//#include "Book.h"
void BookStore::show(Admin& admin, Book& bk)
{
	if (&admin != NULL)
	{

		bk.ShowBook();
	}
}