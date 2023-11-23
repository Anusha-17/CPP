#include<iostream>
using namespace std;

class parent
{
	public:
	parent()
	{
		cout << " I am in parent\n" ;
	}
};

class child : public parent
{
	public:
	child()
	{
		cout << " I am in child\n" ;
	}
};

int main()
{
	child c_obj;
}
	
