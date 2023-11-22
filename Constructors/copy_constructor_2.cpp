#include<iostream>
using namespace std;

class base
{
	public:
	int a;
	base(int n)
	{
		a=n;
	}
	base(const base &b)
	{
		a=b.a+2;
	}
	void display()
	{
		cout << " Value is a= " << a << endl;
	}
};
int main()
{
	base obj1(20);
	obj1.a=12;
	obj1.display();
	base obj2(obj1);
	obj2.display();
}
	
