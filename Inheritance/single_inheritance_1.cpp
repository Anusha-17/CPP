#include<iostream>
using namespace std;

class A
{
	protected:
	int a;
	
	public:
	void set_A()
	{
		cout << "Enter the value of a = " ;
		cin >> a;
	}
	void disp_A()
	{
		cout << "\n Value of a = " << a << endl;
	}
};


class B : public A
{
	int b,p;
	public:
	void set_B()
	{
		set_A();
		cout << "Enter the value of b = " ;
		cin >> b;
	}
	void disp_B()
	{
		disp_A();
		cout << "\n Value of b = " << b << endl;
	}
	void product()
	{
		p=a*b;
		cout << "\n Product is : " << p << endl;
	}
};

int main()
{
	B B_obj;
	B_obj.set_B();
	B_obj.disp_B();
	B_obj.product();
}
