#pragma once

#include "Book.h"
#include "Admin.h"
#include "Student.h"
class BookStore {
	Book* book;
	Admin* admin;
	Student* student;
	void show(Admin& admin, Book& bk);

};