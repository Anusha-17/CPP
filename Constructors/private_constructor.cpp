#include<iostream>
using namespace std;

class copy_cons
{
	int id;
	//void init(int x)
	//{
	//	id=x;
	//}
	copy_cons(int x)
	{
		id=x;
	}
	public:
	copy_cons()
	{
		copy_cons();
	}
	//copy_cons(copy_cons &t)  //copy constructor
	//{
	//	id=t.id;
	//}
	void display()
	{
		cout << " ID is = " << id << endl;
	}
};

int main()
{
	copy_cons obj1;
	//obj1.init(1);
	obj1.display();
	
	//copy_cons obj2(obj1);
	//obj2.display();
	
}
