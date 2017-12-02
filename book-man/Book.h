#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
	string author, name, publisher;
	float price;
	int *quantity;
public:
	Book() {
		author = new string;
		name = new string;
		publisher = new string;
		price = new float;
		quantity = new int;
	}
	void GetBook();
	void EditBook();
	void ShowBook();
	int SearchBook(string, string);
	void BuyBook();
};