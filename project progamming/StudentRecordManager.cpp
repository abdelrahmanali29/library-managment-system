#include "StudentRecordManager.h"
#include <iostream>
#include <fstream>
using namespace std;

StudentRecordManager::StudentRecordManager()
{
	studentName = " ", studentID = 0, bookID = " ", department = " ";
}
void StudentRecordManager::issueRecord()
{
	cin.ignore();
	ofstream booksfile("c:\\MSA Programming Application\\issued book.csv", ios::app);
	booksfile << bookID << "," << studentID << "\n";
	booksfile.close();
}
