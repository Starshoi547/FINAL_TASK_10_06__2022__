#pragma once
#include "Group.h"

class Student_Manager
{
private:
	string group
		;
public:
	int calculateAvgIQ(Group& group);
	int calculateAvgMark(Group& group);
	int calculateAvgIQSuperStudentsOnly(Group& group);
	int calculateAvgMarkSuperStudentsOnly(Group& group);
	string findTheBestStudent(Group& group);
	string findMaxIQ(Group& group);
	void findMaxMark(Group& group);
	void findMinIQ(Group& group);
	void findMinMark(Group& group);
};


