#pragma once
#include <string>
#ifndef BookManager_h
#define BookManager_h
using namespace std;
class BookManager
{
private:
	string title, author;
protected:
	string department;
	int BookId;
public:
	BookManager();
	void addBook();
	void deleteBook();
	void editBook();
	void searchBook();
	void issueBook();
	void viewBooks();
};
#endif

