#pragma once
#ifndef StudentRecordManager_h
#define StudentRecordManger_h
#include <string>
using namespace std;
class StudentRecordManager
{
protected:
	string studentName;
	int studentID;
	int bookID;
	string department;
public :
	StudentRecordManager();
	void issueRecord();
};
#endif 

