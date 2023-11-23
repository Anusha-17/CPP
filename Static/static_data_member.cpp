#include<iostream>
using namespace std;

class s_member
{
	public:
	int a;
	static int b;
	void printa()
	{
		cout << " A = " << a << endl;
	}
	void printb()
	{
		cout << " B = " << b << endl;
	}
};
int s_member::b=5;

int main()
{
	s_member obj;
	obj.a=1;
	obj.a=2;
	//obj.b=3;
	//obj.b=4;
	obj.printa();
	obj.printa();
	obj.printb();
	obj.printb();
}
	
