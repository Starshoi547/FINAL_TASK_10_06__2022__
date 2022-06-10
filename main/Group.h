#include "Student.h"
class Group
{
private:
	string name;
	Student* list;
	int size;
	int count;

public:
	Group();

	Group(string name, Student** st, int size, Student* list);

	void add(Student& st);

	Student get(int index);

	int get_Size();

	void remove(Student* st);

	string get_Info();

};

