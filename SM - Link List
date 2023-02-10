#include<iostream>
using namespace std;
class student
{
public:
	int id;
	student* ptr;
	student()
	{
		id = 0;
		ptr = 0;
	}
};
class StudentList
{
public:
	student* head, * current;
	int size;
	StudentList()
	{
		head = 0;
		current = 0;
		size = 0;
	}
	void insert(int v)
	{
		student* p = new student;
		p->id = v;
		if (head == 0)
		{
			head = p;
			current = head;
			cout << "Head is: " << head << endl;
		}
		else
		{
			current->ptr = p;
			current = current->ptr;
			cout << "Current is: " << current << endl;
		}
		size++;
	}

};
int main()
{
	StudentList l;
	l.insert(2);
	l.insert(3);

	return 0;
}
