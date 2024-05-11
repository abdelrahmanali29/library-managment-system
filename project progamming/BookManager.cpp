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
void BookManager::addBook()
{
	cout << "enter the data of a the book you want to search about in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	if (department != "Mechanical" || department != "Computer" || department != "Architectrue" ||
		department != "Civil" || department != "Electronics" || department != "Electrical");
	{
		cout << "the department you enter does not exist in the system" << endl;
		cout << "enter the book's department" << endl;
		getline(cin, department);
	}
	cout << "enter the book's title " << endl;
	getline(cin, title);
	cout << "enter the book's author " << endl;
	getline(cin, author);
	cout << "enter the book's ID " << endl;
	cin >> BookId;
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ofstream file(filename, ios::app);
	file << BookId << "," << title << "," << author << "\n";
	file.close();
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
	string word,line;
	cout << "enter the data of a the book you want to search about in a specific department " << endl;
	cout << "enter the book's department" << endl;
	getline(cin, department);
	cout << "enter the book's ID, Book's title or Book's author" << endl;
	getline(cin, word);
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ifstream file(filename);
	while (getline(file, line))
	{
		if (line.find(word) != string::npos) {
			cout << line << endl;
		}
	}

	file.close();
}
void BookManager::issueBook()
{

}
void BookManager::viewBooks() {

}
