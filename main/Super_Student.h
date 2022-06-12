#pragma once
#include "Student.h"

class Super_Student
{
	
private:
	int ability;
	string name;
	int mark;

public:
	Super_Student();
	Super_Student(string name, int mark, int ability);
	~Super_Student();
};

