#include "Student.h"

Student::Student() {
	name = "NONE";
	mark = NULL;
	count++;
};

Student::Student(string name, int mark) {
	if (mark > 10)
	{
		this -> mark = 10;
	}
	else if (mark < 0) {
		this->mark = 0;
	}
	else {
		this->mark = mark;
	}
	this->name = name;
	count++;
};

Student::~Student() {
	cout << "destructor" << endl;
	count--;
};


int Student::get_IQ() {
	return IQ_COEFF * mark;
};

int Student::get_Mark() {
	return mark;
};

string Student::get_Name() {
	return name;
};

int Student::get_Student_Count() {
	return count;
};

void Student::set_Name(string name) {
	this->name = name;
};

void Student::set_Mark(int mark) {
	this->mark = mark;
};




string Student::get_Info() {
	return "Name -> " + name
		+ "\nMark - > " + to_string(mark);
};