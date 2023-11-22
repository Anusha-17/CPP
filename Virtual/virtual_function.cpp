#include<iostream>
using namespace std;

class A
{
	int a=10;
	public: 
	virtual void display()
	{
		cout << " Base class virtual function" << endl;
		cout << " A = " << a << endl;
	}
};
class B : public A
{
	int b=20;
	public:
	void display()
	{
		cout << "Derived class virtual function" << endl;
		cout << " B = " << b << endl;
	}
};

int main()
{
	A *a;
	B b;
	a=&b;
	a->display();
	
}
