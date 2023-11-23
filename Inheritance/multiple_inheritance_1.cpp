#include<iostream>
using namespace std;

class A
{
	protected:
	int a;
	public:
	void set_A()
	{
		cout << "Enter tha value of a = " ;
		cin >> a;
	}
	void disp_A()
	{
		cout << "\n value of a = " << a ;
	}
};

class B : public A
{
	protected:
	int b;
	public:
	void set_B()
	{
		cout << "Enter tha value of b = " ;
		cin >> b;
	}
	void disp_B()
	{
		cout << "\n value of b = " << b ;
	}
};

class C : public B	
{
	int c,p;
	public:
	void set_C()
	{
		cout << "Enter tha value of c = " ;
		cin >> c;
	}
	void disp_C()
	{
		cout << "\n value of c = " << c ;
	}
	void product()
	{
		cout <<"\n Product = " << a*b*c << endl;
	}
};

int main()
{
	C c_obj;
	c_obj.set_A();
	c_obj.set_B();
	c_obj.set_C();
	c_obj.disp_A();
	c_obj.disp_B();
	c_obj.disp_C();
	c_obj.product();
}
	
	

	


