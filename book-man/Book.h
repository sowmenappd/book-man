#pragma once
#include <iostream>
#include <string>


class Book {
private:
	char *author, *name, *publisher;
	float *price;
	int *quantity;
public:
	Book() {
		author = new char[];
		name = new char[];
		publisher = new char[];
		price = new float;
		quantity = new int;
	}
	void GetBook();
	void EditBook();
	void ShowBook();
	int SearchBook(const char* BuyBook, const char* BuyAuthor);
	void BuyBook();
	Book& SellBook();
};