#include<iostream>
using namespace std;

class base
{
	public:
	base()
	{
		cout << " base class constructor executed" << endl;
	}
	virtual ~base()
	{
		cout << " base class destructor executed" << endl;
	}
};

class derived : public base
{
	public:
	derived()
	{
		cout << " derived class constructor executed" << endl;
	}
	~derived()
	{
		cout << " derived class destructor executed" << endl;
	}
};
		
int main()
{
	derived *ptr_derived=new derived();
	base *ptr_base=ptr_derived;
	delete ptr_base;
}	
	
