#include "BookManager.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
BookManager::BookManager()
{
	title = " ", author = " ", department = " ", BookId = 0;
}
void BookManager::addBook()
{
	cin.ignore();
	cout << "enter the data of the book you want to search about in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	cout << "enter the book's title " << endl;
	getline(cin, title);
	cout << "enter the book's author " << endl;
	getline(cin, author);
	cout << "enter the book's ID " << endl;
	cin >> BookId;
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ofstream file(filename, ios::app);
	file << "\n";
	file << BookId << "," << title << "," << author << "\n";
	file.close();
	cout << "the book has been added to the library" << endl;
}
void BookManager::deleteBook()
{
	cin.ignore();
	string line, word;
	bool isfound = false;
	cout << "enter the data of a the book you want to delete in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);


	cout << "enter the book's ID, Book's title or Book's author" << endl;
	getline(cin, word);
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ifstream file(filename);
	ofstream Temp("temp.txt");
	while (getline(file, line))
	{
		if (line.find(word) == string::npos)
		{
			Temp << line << endl;
		}
		else
		{
			isfound = true;
		}
	}
	file.close();
	Temp.close();
	if (isfound)
	{
		remove(filename.c_str());
		rename("temp.txt", filename.c_str());
		cout << "the book " << word << " is deleted from the file " << endl;
	}
	else
	{
		remove("temp.txt");
		cout << "book " << word << " is not found in the file." << endl;
	}
}
void BookManager::searchBook()
{
	cin.ignore();
	string word, line;
	cout << "enter the data of a the book you want to search about in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	cout << "enter the book's ID, Book's title or Book's author" << endl;
	getline(cin, word);
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ifstream file(filename);
	while (getline(file, line))
	{
		if (line.find(word) != string::npos)
		{
			cout << line << endl;
		}
	}

	file.close();
}
void BookManager::viewBooks()
{
	string line;
	cin.ignore();
	cout << "enter the department you want to view the books of" << endl;
	getline(cin, department);
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ifstream file(filename);
	while (getline(file, line))
	{

		cout << line << endl;

	}
	file.close();
}
