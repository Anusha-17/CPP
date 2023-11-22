#include<iostream>
using namespace std;

class constructor
{
	public:
	int a,b;
	constructor() // Default Constructor
	{
		a=10;
		b=20;
	}
};

int main()
{
	constructor c;
	cout << "a= " << c.a << " b= " << c.b << endl;
}
		
