#pragma once
#ifndef InputManager_h
#define InputManager_h
#include "StudentRecordManager.h"

class InputManager : public StudentRecordManager
{

public:
	string getdata();
	void CheckId(string bookID);

};
#endif
