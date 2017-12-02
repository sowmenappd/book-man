#include "Student.h"
#include <string>
#include "Book.h"
#include "BookStore.h"
using namespace std;

bool Student::buyOrder(BookStore& bs, Book& bk)
{

}

bool Student::sellOrder() {
	Book *newBook;
	newBook->SellBook();
	return true;
}

bool Student::SetStudent(string nameIn, string id, string passIn, string locationIn, string contactIn) 
{
	*name = nameIn;
	*ID = id;
	*pass = passIn;
	*location = locationIn;
	*contact = contactIn;
}