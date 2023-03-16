#include<iostream>
using namespace std;
class Base
{
	public:
	void show()
	{
		cout<<"\nThe fun of Base class";
	}	
};
class Derived:public Base
{
	public:
	void show()
	{
		cout<<"\nThe fun of Derived class";
		Base::show();
	}	
};
int main()
{
	Derived D;
	D.show();
	//D.Base::show();
	return 0;
}