#include "Book.h"

void Book::GetBook() {
	cin.ignore();
	cout << endl;
	cout << "Enter Author Name: ";
	cin >> author;
	cout << "Enter Book Name: ";
	cin >> name;
	cout << "Enter Publisher Name: ";
	cin >> publisher;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter Quantity: ";
	cin >> *quantity;
}

void Book::EditBook() {
	cout << endl;
	cout << "Enter Author Name: ";
	cin >> author;
	cout << "Enter Book Name: ";
	cin >> name;
	cout << "Enter Publisher Name: ";
	cin >> publisher;
	cout << "Enter Price: ";
	cin >> price;
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

int Book::SearchBook(string BuyBook, string BuyAuthor) {
	if (strcmp(BuyBook, name) == 0 && strcmp(BuyAuthor, author) == 0)
		return 1;
	else
		return 0;
}

int Book::BuyBook() {
	int countBook;
	cout << endl;
	cout << "Enter Number of Books to buy: ";
	cin >> countBook;
	if (countBook <= *quantity) {
		*quantity = *quantity - countBook;
		cout << "Books Bought Successfully." << endl;
		cout << "Amount in tk: " << (*quantity)*countBook;
	}
	else
		cout << "Required Copies not in Stock." << endl;
}

