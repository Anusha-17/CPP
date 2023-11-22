#include<iostream>
using namespace std;

class myclass
{
	public:
	void print()
	{
		cout << "I am in class" << endl;
	}
	void display()
	{
		cout << "Welcome" << endl;
	}
	
};

int main()
{
	myclass myobj;
	myobj.print();
	myobj.display();
}
		
