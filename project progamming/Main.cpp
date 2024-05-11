#include "MainMenu.h"
#include "BookManager.h"
#include <iostream>
#include <string.h>
using namespace std;
int displayBookManager()
{
	int choice2=0;
	cout << "Book Manager:\n"
		<< "1- Add Book\n"
		<< "2- Delete Book \n"
		<< "3- Edit Book \n"
		<< "4- Search Book\n"
		<< "5- issue Book\n"
		<< "6- View Book\n"
		<< "7- return to Main Menu\n"
		<< "8-exit\n"
		<< "------------------------------------";
	cout << "\nplease select one choice" << endl;
	cin >> choice2;
	if (choice2 < 1 || choice2 > 8)
	{
		cout << "please, enter a valid number between 1 and 8" << endl;
		cin >> choice2;
	}
	return choice2;
}
int main()
{
	int choice = 0, x = 0, y = 0;
	MainMenu a;
	BookManager b;
	//StudentRecordManager c;
	//InputManager e;
	a.displayMainMenu();
	a.displayMainMenu2();
	cout << "\nplease select one choice" << endl;
	cin >> choice;
	if (choice < 1 || choice > 4)
	{
		cout << "please, enter a valid number between 1 and 4" << endl;
		cin >> choice;
	}
	system("CLS");
	if (choice == 1)
	{
		int choice2 = displayBookManager();
		system("CLS");
		if (choice2 == 1)
			b.addBook();
		if (choice2 == 2)
			//b.deleteBook();
		if (choice2 == 3)
			//b.editBook();
		if (choice2 == 4)
			//b.searchBook();
		if (choice2 == 5)
			//b.issueBook();
		if (choice2 == 6)
			//b.viewBooks();
		if (choice2 == 7)
			//a.displayMainMenu2();
		if (choice2 == 8)
			return 0;
	}
	else if (choice == 2)
	{
	}
	else if (choice == 3)
	{

	}
	else if (choice == 4)
	{
		cout << "The application will be closed now "
			<< "-------------------------------------" << endl;
		return 0;
	}
		
	else
		return 0;
}

