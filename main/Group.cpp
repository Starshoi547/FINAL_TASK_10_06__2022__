#include "Group.h"


Group::Group() {
	this->name = "NONE";
	this->size = 0;

};

Group::Group(string name, Student** st, int size, Student* list) {
	this->name = name;
	this->size = size;
};

void Group::add(Student &st) {
	if (list == NULL)
	{
		list = new Student[1];
		list[0] = st;
		size = 1;
	}
	else {
		Student* temp = new Student[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = st;
		size++;
		delete[] list;
		list = temp;
	}
};

Student Group::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return Student("", 0);
	}
	else {
		return list[index];
	}
};

int Group::get_Size() {
	return size;
};

void Group::remove(Student* st) {
	count--;
};

string Group::get_Info() {
	return "Group name -> " + name
		+ "\nGroup size -> " + to_string(size);
}