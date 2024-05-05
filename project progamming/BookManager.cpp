#include "BookManager.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;
BookManager::BookManager()
{
	title = " ", author = " ", department = " ", BookId = 0;
}
void BookManager :: addBook()
{
	cin.ignore();
	cout << "enter the data of a book in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	cout << "enter the book's title " << endl;
	getline(cin, title);
	cout << "enter the book's author " << endl;
	getline(cin, author);
	cout << "enter the book's ID " << endl;
	cin >> BookId;
	if (department == "Mechanical")
	{
		ofstream Mechfile("c:\\MSA Programming Application\\Mechanical.csv", ios::app);
		Mechfile << BookId << "," << title << "," << author << "\n";
		Mechfile.close();
	}
	else if (department == "Computer")
	{
		ofstream Compfile("c:\\MSA Programming Application\\Computer.csv", ios::app);
		Compfile << BookId << "," << title << "," << author << "\n";
		Compfile.close();
	}
	else if (department == "Electronics")
	{
		ofstream Elecfile("c:\\MSA Programming Application\\Electronics.csv", ios::app);
		Elecfile << BookId << "," << title << "," << author << "\n";
		Elecfile.close();
	}
	else if (department == "Civil")
	{
		ofstream Civilfile("c:\\MSA Programming Application\\Civil.csv", ios::app);
		Civilfile << BookId << "," << title << "," << author << "\n";
		Civilfile.close();
	}
	else if (department == "Architecture")
	{
		ofstream Archfile("c:\\MSA Programming Application\\Architecture.csv", ios::app);
		Archfile << BookId << "," << title << "," << author << "\n";
		Archfile.close();
	}
	else if (department == "Electrical")
	{
		ofstream Electfile("c:\\MSA Programming Application\\Electrical.csv", ios::app);
		Electfile << BookId << "," << title << "," << author << "\n";
		Electfile.close();
	}
	else
		cout << "the department you enter does not exist in the system" << endl;
	cout << "the book has been added to the library" << endl;
}
void BookManager::deleteBook()
{
	int deleteID = 0, count = 0, id;
	string line, word;
	cin.ignore();
	cout << "enter the data of a the book you want to delete in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	cout << "enter the book's ID " << endl;
	cin >> deleteID;
	if (department == "Mechanical")
	{
		ifstream Mechfile("c:\\MSA Programming Application\\Mechanical.csv", ios::app);
		ofstream Mechfile("c:\\MSA Programming Application\\Mechanicalnew.csv", ios::app);
		vector <string>row;
		while (!Mechfile.eof())
		{
			getline(Mechfile, line);
			stringstream s(line);
			while (getline(s, word, ','))
			{
				row.push_back(word);
			}
			int row_size = row.size();
			id = stoi(row[0]);
			if (id != deleteID)
			{
				
			}
			if (count == 1)
				cout << "Book has been deleted" << endl;
			else
				cout << "book is not found in this depertment"<<endl;
		}
		Mechfile.close();
	}
	else if (department == "Computer")
	{
		ofstream Compfile("c:\\MSA Programming Application\\Computer.csv", ios::app);




		Compfile.close();
	}
	else if (department == "Electronics")
	{
		ofstream Elecfile("c:\\MSA Programming Application\\Electronics.csv", ios::app);




		Elecfile.close();
	}
	else if (department == "Civil")
	{
		ofstream Civilfile("c:\\MSA Programming Application\\Civil.csv", ios::app);



		Civilfile.close();
	}
	else if (department == "Architecture")
	{
		ofstream Archfile("c:\\MSA Programming Application\\Architecture.csv", ios::app);



		Archfile.close();
	}
	else if (department == "Electrical")
	{
		ofstream Electfile("c:\\MSA Programming Application\\Electrical.csv", ios::app);




		Electfile.close();
	}
}
void BookManager::editBook() {

}
void BookManager::searchBook()
{

}
void BookManager::issueBook()
{

}
void BookManager::viewBooks() {

}
