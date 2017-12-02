#pragma once

#include "Book.h"
#include "Admin.h"
#include "Student.h"
class BookStore : public Admin{
	Book* book;
	Admin* admin;
	Student* student;
	void show(Admin& admin, BookStore& bk);

};