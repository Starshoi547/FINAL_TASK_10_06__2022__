#include "Super_Student.h"


Super_Student::Super_Student() {
	name = " ";
	mark = NULL;
	ability = NULL;

};
Super_Student::Super_Student(string name, int mark, int ability) {
	this->name = name;
	this->mark = mark;
	this->ability = ability;
};