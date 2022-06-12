#pragma once
#include "Student.h"
#include "Header.h"
class Group
{

	friend class Student_Manager;

private:
	string name;
	Student* list;
	int size;
	int count;

public:
	Group();

	Group(string name, int size);

	void add(Student& st);

	Student get(int index);

	int get_Size();

	string get_Group_Name();

	void set_Size(int size);

	void set_Group_Name(string name);

	void remove(Student* st);

	string get_Info();

};

