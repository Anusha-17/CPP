#include<iostream>
using namespace std;

class parent     // base class
{
	public:
	int id1;
};

class child : public parent  // sub class
{
	public:
	int id2;
};

int main()
{
	child obj;
	obj.id1=10;
	obj.id2=20;
	cout << "Parent num1 : " << obj.id1 << endl;
	cout << "Child num1 : " << obj.id2 << endl;
}
	
