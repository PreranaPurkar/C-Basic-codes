#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A(){//default constructor
		a=0;
		cout<<"\nDefault constructor of A class";
		}
		A(int x){//parameterise constructor
		a=x;	
		}
		~A(){// Destructor
			cout<<"\nDestructor of A class";
		}
};
class B:public A
{
	public:
	int b;
	B(){//Default constructor
	b=0;
	cout<<"\nDefault constructor of B class";
	}	
	B(int y)//Parameterise constructor
	{
		b=y;
	}
	~B(){//Destructor
	cout<<"\nDestructor of B class";	
	}
};
class C:public B
{
	private:
		int c;
		public:
			C(){//Default constructor
			c=0;
			cout<<"\nDefault constructor of C class";
			}
			C(int z){//Parameterise constructor
			c=z;	
			}
			void showData()
			{
				cout<<"\nA="<<a;
				cout<<"\nB="<<b;
				cout<<"\nC="<<c;
			}
			~C(){//Destructor
			cout<<"\nDestructor of C class";
			}
			
};

int main()
{
	C objc;
	objc.showData();
	return 0;
}
