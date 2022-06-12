#pragma once
#include "Header.h"

#define MIN_MARK 0
#define MAX_MARK 10
#define IQ_COEFF 11

class Student
{
private:
	string name;
	int mark;
	int count;

public:
	~Student();
	int get_IQ();
	int get_Mark();
	string get_Name();
	int get_Student_Count();

	void set_Name(string name);

	void set_Mark(int mark);

	Student();

	Student(string name, int mark);

	string get_Info();

	
};

