#include "Book.h"
#include <iostream>
#include <string>
using namespace std;

void Book::GetBook() {
	cin.ignore();
	cout << endl;
	cout << "Enter Author Name: ";
	cin >> *author;
	cout << "Enter Book Name: ";
	cin >> *name;
	cout << "Enter Publisher Name: ";
	cin >> *publisher;
	cout << "Enter price: ";
	cin >> *price;
	cout << "Enter Quantity: ";
	cin >> *quantity;
}

void Book::EditBook() {
	cout << endl;
	cout << "Enter Author Name: ";
	cin >> *author;
	cout << "Enter Book Name: ";
	cin >> *name;
	cout << "Enter Publisher Name: ";
	cin >> *publisher;
	cout << "Enter Price: ";
	cin >> *price;
	cout << "Enter Quantity: ";
	cin >> *quantity;
}

void Book::ShowBook() {
	cout << endl;
	cout << "Author Name: " << author << endl;
	cout << "Book Name: " << name << endl;
	cout << "Publisher Name: " << publisher << endl;
	cout << "Price: " << price << endl;
	cout << "Quantity of book: " << *quantity << endl;
}

int Book::SearchBook(const char* BuyBook, const char* BuyAuthor) {
	if (strcmp(BuyBook, name) == 0 && strcmp(BuyAuthor, author) == 0)
		return 1;
	else
		return 0;
}

void Book::BuyBook() {
	int numOfBooks;
	cout << endl;
	cout << "Enter Number of Books to buy: ";
	cin >> numOfBooks;
	if (numOfBooks <= *quantity) {
		*quantity = *quantity - numOfBooks;
		cout << "Books Bought Successfully." << endl;
		cout << "Amount in tk: " << numOfBooks;
	}
	else
		cout << "Book out of Stock." << endl;
}

Book& Book::SellBook()
{
	Book* newBook = new Book;
	cout << endl;
	cout << "Enter Author Name: ";
	cin >> newBook->author;
	cout << "Enter Book Name: ";
	cin >> newBook->name;
	cout << "Enter Publisher Name: ";
	cin >> newBook->publisher;
	cout << "Enter Price: ";
	cin >> *(newBook->price);
	cout << "Enter Quantity: ";
	cin >> *(newBook->quantity);

	return *newBook;
}