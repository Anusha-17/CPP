/*
#include<iostream>
using namespace std;
class p
{
	private:
	int a,b;
	public:
	p(int x,int y)   // Parameterized Constructor
	{
		a=x;
		b=y;
	}
	int getx()
	{
		return a;
	}
	int gety()
	{
		return b;
	}
};

int main()
{
	p obj(10,20);
	cout << "a = " << obj.getx() << " b = " << obj.gety() << endl;
}
*/

#include<iostream>
using namespace std;

class student
{
	int rno;
	string name;
	double fee;
	public:
	student(int r,string n,double f);
	void display();
};

student::student(int r,string n,double f)
	{
		rno=r;
		name=n;
		fee=f;
	}
void student::display()
	{
		cout << "Roll No: " << rno << "," << "Name: " << name << "," << "Fee: " << fee << endl;
	}


int main()
{
	student s(1,"Anusha",10000);
	s.display();
}
	
