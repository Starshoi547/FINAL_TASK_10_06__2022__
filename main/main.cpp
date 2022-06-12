#include "Header.h"
#include "Student.h"
#include "Group.h"


int main()
{

	Student student1("Natasha", 8);

	Group group1("1A", 5);

	

	cout << student1.get_Info() << endl; 



	cout << student1.get_IQ() << endl;


	cout << group1.get_Info() << endl;

	group1.add(student1);

	group1.get(0);

	return 0;
}

