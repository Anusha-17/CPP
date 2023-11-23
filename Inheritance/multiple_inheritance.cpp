#include<iostream>
using namespace std;

class grandparent
{
	public:
	grandparent()
	{
		cout << "I am in grandparent \n" ;
	}
};

class parent
{
	public:
	parent()
	{
		cout << "I am in parent \n" ;
	}
};

class child : public grandparent, public parent
{
	public:
	child()
	{
		cout << "I am in child \n" ;
	}
};

int main()
{
	child c_obj;
}	
