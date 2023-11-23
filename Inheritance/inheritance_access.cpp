#include<iostream>
using namespace std;

class a
{
	public:
		int x;
	private:
		int y;
	protected:
		int z;
};

class b : public a
{
	//x is public
	//y is not accessible from b
	//z is protected
};

class c : protected a
{
        //x is protected
	//y is not accessible from c
	//z is protected
};

class d : private a  // private is default for classess
{
	//x is private
	//y is not accessible from d
	//z is private
};		

int main()
{
	b b_obj;
	c c_obj;
	d d_obj;
	cout << b_obj.x << b_obj.y << b_obj.z << endl;
	cout << c_obj.x << c_obj.y << c_obj.z << endl;
	cout << d_obj.x << d_obj.y << d_obj.z << endl;
}
