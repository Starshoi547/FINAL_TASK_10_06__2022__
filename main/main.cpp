#include "Header.h"
#include "Student.h"
#include "Group.h"
#include "Super_Student.h"
#include "Student_Manager.h"

int main()
{
	string message = "";

	Student_Manager manager1("Pablo");

	Student student1("Natasha", 8);
	Student student2("Misha", 3);
	Student student3("Rat", 10);

	Group group1("1A", 3);

	

	cout << student1.get_Info() << endl; 



	//cout << student1.get_IQ() << endl;


	//cout << group1.get_Info() << endl;

	group1.add(student1);
	group1.add(student2);
	group1.add(student3);

	cout << group1.get_Info() << endl;

	int AVG = manager1.calculateAvgIQ(group1);

	cout << "Avg IQ from " << group1.get_Group_Name() << " --> " << AVG << endl;

	AVG = manager1.calculateAvgMark(group1);
	cout << "Avg mark from " << group1.get_Group_Name() << " --> " << AVG << endl;

	string TheBest = manager1.findTheBestStudent(group1);
	cout << TheBest << endl;

	string TheWorst = manager1.findTheWorstStudent(group1);
	cout << TheWorst << endl;

	string MaxIQ = manager1.findMaxIQ(group1);
	cout << MaxIQ << endl;

	string MinIQ = manager1.findMinIQ(group1);
	cout << MinIQ << endl;

	string MaxMark = manager1.findMaxMark(group1);
	cout << MaxMark << endl;

	string MinMark = manager1.findMinMark(group1);
	cout << MinMark << endl;

	return 0;
}

