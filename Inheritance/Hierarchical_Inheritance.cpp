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

class parent : public grandparent // first sub class  gandparent
{
	public:
	parent()
	{
		cout << "I am in parent \n" ;
	}
};

class child : public grandparent  // second sub class  
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
	parent p_obj;
}	
