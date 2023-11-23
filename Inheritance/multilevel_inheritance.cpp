#include<iostream>
using namespace std;

class grandparent  //base class
{
	public:
	grandparent()
	{
		cout << "I am in grandparent \n" ;
	}
};

class parent : public grandparent // first sub class derived from class gandparent
{
	public:
	parent()
	{
		cout << "I am in parent \n" ;
	}
};

class child : public parent  // sub class derived from the derived base class parent
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
