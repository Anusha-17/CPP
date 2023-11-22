#include<iostream>
using namespace std;

class student
{
	int rno;
	string name;
	double fee;
	public:
	student()
	{
		cout << "Enter Roll No : " << endl;
		cin >> rno;
		cout << "Enter Name :  " << endl;
		cin >> name;
		cout << "Enter fee : " << endl;
		cin >> fee;
	}
	void display()
	{
		cout << "Roll No: " << rno << "," << "Name: " << name << "," << "Fee: " << fee << endl;
	}
};

int main()
{
	student s;
	s.display();
}
