#include<iostream>
using namespace std;

class A
{
	protected:
	int a;
	public:
	void get_a()
	{
		cout << "Enter the value of a : " ;
		cin >> a;
	}
};

class B : public A
{
	protected:
	int b;
	public:
	void get_b()
	{
		cout << "Enter the value of b : " ;
		cin >> b;
	}
};

class C
{
	protected:
	int c;
	public:
	void get_c()
	{
		cout << "Enter the value of c : " ;
		cin >> c;
	}
};

class D : public B, public C
{
	protected:
	int d;
	public:
	void p()
	{
		get_a();
		get_b();
		get_c();
		cout << "Product of a,b,c is : " << a*b*c << endl;
	}
};

int main()
{
	D d_obj;
	d_obj.p();
}

	
		
