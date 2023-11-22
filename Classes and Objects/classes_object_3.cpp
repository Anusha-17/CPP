/*
#include<iostream>
using namespace std;

class item
{
	int number;  // private by default
	float cost;
	public:
	void getdata(int a,float b);
	void putdata(void)
	{
		cout << "Number : " << number << endl;
		cout << "Cost : " << cost << endl;
	}
};

void item :: getdata(int a,float b)
{
	number=a;
	cost=b;
}

int main()
{
	item x;
	cout << "In object x" << "\n" ;
	x.getdata(100,299.95);
	x.putdata();
	
	item y;
	cout << "In object y" << "\n" ;
	y.getdata(200,399.95);
	y.putdata();
}
*/

/*
#include<iostream>
using namespace std;

class rectangle
{
	float len, bre,area,peri;
	public:
	void setdata()
	{
		cout << "Enter the len: " << endl;
		cin >> len;
		cout << "Enter the bre: " << endl;
		cin >> bre;
		area=0.0;
		peri=0.0;
	}
	void display()
	{
		cout << "Len : " << len << endl;
		cout << "Bre : " << bre << endl;
		cout << "area : " << area << endl;
		cout << "peri : " << peri << endl;
	}
	void cal_area()
	{
		area=len*bre;
	}
	void cal_peri()
	{
		peri=2*(len+bre);
	}
};

int main()
{
	rectangle obj1;
	cout << "Size : " << sizeof(obj1) << " " << &obj1 << endl;
	obj1.setdata();
	obj1.cal_area();
	obj1.cal_peri();
	obj1.display();
}
*/

#include<iostream>
using namespace std;

class Employee
{
	int id;
	string name;
	float salary;
	public:
	void insert(int i,string n,float s)
	{
		id=i;
		name=n;
		salary=s;
	}
	void display()
	{
		cout << "ID - " << id << ", " << "Name - " << name << ", " << "Salary - " << salary << endl;
	}
};

int main()
{
	Employee e1;
	Employee e2;
	e1.insert(1,"Anusha",10000.00);
	e2.insert(2,"Aadhya",12000.00);
	e1.display();
	e2.display();
}
