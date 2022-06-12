#include "Group.h"


Group::Group() {
	this->name = "NONE";
	this->size = 0;

};

Group::Group(string name, int size) {
	this->name = name;
	this->size = size;
	list = NULL;

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

void Group::set_Size(int size) {
	this->size = size;
}

void Group::set_Group_Name(string name) {
	this->name = name;
}

int Group::get_Size() {
	return size;
};

string Group::get_Group_Name() {
	return name;
}

void Group::remove(Student* st) {
	count--;
};

string Group::get_Info() {
	if (list == NULL)
	{
		return "Group " + name + " is empty.";
	}
	else {
		string msg = "Workers of group " + name + ":\n";
		for (int i = 0; i < size; i++)
		{
			msg += list[i].get_Info() + "\n";
		}
		return msg;
	}
}