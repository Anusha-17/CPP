#include<iostream>
using namespace std;

class s
{
	public:
	static int a;
	static void print()
	{
		cout << a << endl;
	}
};
int s :: a=10;
int main()
{
	s obj;
	obj.a=20;
	s :: print();
}
