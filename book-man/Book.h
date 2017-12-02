#pragma once
#include <string>
using namespace std;

class Book {
private:
	char* author, *title, *publisher;
	float* price;
	int* stock;
public:
	book();
	void GetBook;
	void EditBook;
	void ShowBook;
	int SearchBook(char[], char[]);
	void BuyBook();
};