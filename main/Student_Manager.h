#pragma once
#include "Group.h"

class Student_Manager
{
private:
	string group;
	string name;

public:
	Student_Manager();
	Student_Manager(string name);


	int calculateAvgIQ(Group& group);
	int calculateAvgMark(Group& group);
	int calculateAvgIQSuperStudentsOnly(Group& group);
	int calculateAvgMarkSuperStudentsOnly(Group& group);
	string findTheBestStudent(Group& group);
	string findTheWorstStudent(Group& group);
	string findMaxIQ(Group& group);
	string findMaxMark(Group& group);
	string findMinIQ(Group& group);
	string findMinMark(Group& group);
};


