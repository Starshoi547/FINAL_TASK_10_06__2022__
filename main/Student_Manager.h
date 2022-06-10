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
	int findTheBestStudent(Group& group);
	int findMaxIQ(Group& group);
};
};

