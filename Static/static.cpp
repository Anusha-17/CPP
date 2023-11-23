#include<iostream>
using namespace std;

class A
{
	int a;
	static int b;
	public:
	A(int x,int y)
	{
		a=x;
		b=y;
	}
	void seta()
	{
		cout << a << endl;
	}
	static void setb()
	{
		cout << b << endl;
	}
};
int A :: b=0;
int main()
{
	A obj1(10,20);
	A obj2(100,200);
	obj1.seta();
	obj2.seta();
	A::setb();
	obj2.seta();
};
	
	
