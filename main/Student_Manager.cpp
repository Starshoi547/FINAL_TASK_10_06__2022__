#include "Student_Manager.h"



int Student_Manager::calculateAvgIQ(Group &group) {
	int avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].get_IQ();
	}

	avg /= group.size;
	return avg;
};

int Student_Manager::calculateAvgMark(Group& group) {
	int avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].get_Mark();
	}

	avg /= group.size;
	return avg;
};

int Student_Manager::calculateAvgIQSuperStudentsOnly(Group& group){
	int avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].get_Mark();
	}

	avg /= group.size;
	return avg;
};

int Student_Manager::calculateAvgMarkSuperStudentsOnly(Group& group){
	return 0;
};

string Student_Manager::findTheBestStudent(Group& group){
	int index = 0;

	for (int i = 1; i < group.size; i++)
	{
		if (group.list[i].get_Mark() > group.list[index].get_Mark() )
		{
			index = i;
		}
	}

	return "The best student --> " + group.list[index].get_Name() + ", Mark = " + to_string(group.list[index].get_Mark());
};

string Student_Manager::findMaxIQ(Group& group){
	int index = 0;

	for (int i = 1; i < group.size; i++)
	{
		if (group.list[i].get_IQ() > group.list[index].get_IQ())
		{
			index = i;
		}
	}

	return group.list[index].get_Name();
};

void Student_Manager::findMaxMark(Group& group){

};

void Student_Manager::findMinIQ(Group& group){

};

void Student_Manager::findMinMark(Group& group){

};
