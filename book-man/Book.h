#pragma once
#include <iostream>
#include <string>


class Book {
public:
	char *author, *name, *publisher;
	float *price;
	int *quantity;
	Book() {
		author = new char[];
		name = new char[];
		publisher = new char[];
		price = new float;
		quantity = new int;
	}
	void GetBook();
	//void EditBook();
	void ShowBook();
	bool SearchBook(const char* BuyBook, const char* BuyAuthor);
	void BuyBook();
	Book& SellBook();
	//void SetAuthor();
	void SetBookInfo();
};