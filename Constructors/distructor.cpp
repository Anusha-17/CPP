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



