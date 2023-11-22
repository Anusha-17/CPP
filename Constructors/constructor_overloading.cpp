#include<iostream>
using namespace std;

class cons
{
	int a,b,c;
	public:
	cons()
	{
		cout << "Default constructor" << endl;
	}
	cons(int a)
	{
		this->a=a;
		cout << " Value of a = " << a << endl;
	}
	cons(int a,int b)
	{
		this->a=a;
		this->b=b;
		cout << "Addition of a and b is = " << a+b << endl;
	}
	cons(float a,float b, int c)
	{
		a=25;
		this->a=a;
		this->b=b;
		cout << " Values a = " << a << " b = " << b << " c = " << c << endl;
	}
};

int main()
{
	cons c;
	cons c1(12);
	cons c2(12,14);
	cons c3(12.1,13.4,11);
}
		
