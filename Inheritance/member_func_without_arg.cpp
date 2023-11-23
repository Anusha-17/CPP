#include<iostream>
using namespace std;

class person
{
	int rno;
	char name[10];
	
	public:
	void setdata()
	{
		cout << "Enter roll no : " << endl;
		cin >> rno;
		cout << "Enter name : " << endl;
		cin >> name;
	}
	
	void display1()
	{
		cout << " Roll No : " << rno << "\n" << " Name : " << name << endl;
	}
};

class student : private person
{
	char course[50];
	int fee;
	
	public:
	void setdata2()
	{
		setdata();
		cout << "Enter course : " << endl;
		cin >> course;
		cout << "Enter fee : " << endl;
		cin >> fee;
	}
	void display2()
	{
		display1();
		cout << " Course : " << course << "\n" << " Fee : " << fee << endl;
	}
};

int main()
{
	student s;
	s.setdata2();
	s.display2();
}
		
