//Public
/*
#include<iostream>
using namespace std;

class circle
{
	public:
	double radius;
	double circle_area()
	{
		return 3.14*radius*radius;
	}
};
int main()
{
	circle obj;
	obj.radius=5.2;
	cout << "Radius is: " << obj.radius << endl;
	cout << "Area is : " << obj.circle_area() << endl;
}
*/

//Private

/*
#include<iostream>
using namespace std;

class circle
{
	private:
	double radius;
	public:
	double circle_area()   // member function can access the private data member
	{
		return 3.14*radius*radius;
	}
};
int main()
{
	circle obj;
	obj.radius=5.2;
	cout << "Radius is: " << obj.radius << endl; // error: ‘double circle::radius’ is private within this context

	cout << "Area is : " << obj.circle_area() << endl;
}
*/

/*
#include<iostream>
using namespace std;

class circle
{
	private:
	double radius;
	public:
	void circle_area(double r)   // member function can access the private data member
	{
		radius=r;
		double area = 3.14*radius*radius;
		cout << "Radius is: " << radius << endl;
		cout << "Area is : " << area << endl;
	}
};
int main()
{
	circle obj;
	obj.circle_area(2.2);
	
}
*/

//Protected


#include<iostream>
using namespace std;

class parent
{
	protected:
	int id_protected;
};

class child : public parent
{
	public:
	void setID(int id)
	{
		id_protected=id; // Child class is able to access the inherited protected data members of base class
	}
	void print()
	{
		cout << "ID protected is : " << id_protected << endl;
	}
};

int main()
{
	child obj;  // member function of the derived class can access the protected data members of the base class
	obj.setID(1);
	obj.print();
}
		
