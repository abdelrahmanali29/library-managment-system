#include "InputManager.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string InputManager::getdata()
{
	cin.ignore();
	cout << "please enter student name you want to issue book to" << endl;
	getline(cin, studentName);
	cout << "please enter student Id" << endl;
	cin >> studentID;
	cin.ignore();
	cout << "please enter book Id you want to issue" << endl;
	getline(cin, bookID);
	cout << "please enter book's department " << endl;
	getline(cin, department);
	return bookID;
}
void InputManager::CheckId(string bookID)
{
	string line;
	string filename = "c:\\MSA Programming Application\\" + department + ".csv";
	ifstream file(filename, ios::app);
	while (getline(file, line))
	{
		if (line.find(bookID) != string::npos)
			cout << "the book is found in the department you entered";
		else
		{
			cout << "the book is not found in this department\n"
				<< "choose another department or reenter book id";
		}
	}
	file.close();
}
