#include<iostream>
using namespace std;

class destructor
{
	public:
	~destructor()
	{
		cout << "destructor executed" << endl;
	}
};
int main()
{
	destructor d;
}


/*
#include<iostream>
using namespace std;

class constructor
{
	public:
	constructor()
	{
		cout << "Constructor executed" << endl;
	}
	~constructor()
	{
		cout << "destructor executed" << endl;
	}
};
int main()
{
	constructor c1,c2,c3;
}
*/


