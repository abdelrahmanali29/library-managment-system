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
	string filename = "c:\\MSA Programming Application\\issuedBook.csv";
	ofstream file(filename);
	file << bookID << "," << studentID << "\n";
	file.close();
	cout << "the book has been issued to the student" << endl;
}
