/*
#include<iostream>
using namespace std;

class copy_cons
{
	int id;
	public:
	void init(int x)
	{
		id=x;
	}
	copy_cons()
	{
	}
	copy_cons(copy_cons &t)  //copy constructor
	{
		id=t.id;
	}
	void display()
	{
		cout << " ID is = " << id << endl;
	}
};

int main()
{
	copy_cons obj1;
	obj1.init(1);
	obj1.display();
	
	copy_cons obj2(obj1);
	obj2.display();
	
}
*/

#include<iostream>
using namespace std;

class student
{
	int rno;
	string name;
	float fee;
	public:
	student(int r,string n,float f)
	{
		rno=r;
		name=n;
		fee=f;
	}
	student(student &s)
	{
		rno=s.rno;
		name=s.name;
		fee=s.fee;
	}
	void display()
	{
		cout << "Roll No : " << rno << " Name = " << name << " Fee = " << fee << endl;
	}
};

int main()
{
	student s(1,"Anusha",12000.22);
	s.display();
	student s1(s);
	s1.display();
};
