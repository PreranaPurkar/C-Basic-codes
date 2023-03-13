//Write a program for friend function
#include<iostream>
using namespace std;
class B;
class A
{
	private:
		int a;
	public:
		A()
		{a=0;}
		A(int x){
			a=x;
		}
		void getA()
		{
			cout<<"\nA="<<a;
		}
			friend void max(A &objA,B &objB);
};
class B
{
	private:
		int b;
		public:
			B()
			{
				b=0;
			}
			B(int y){
				b=y;
			}
			void getB()
			{
				cout<<"\nB="<<b;
			}
			friend void max(A &objA,B &objB);
};
void max(A &objA,B &objB)
{
	if(objA.a>objB.b)
	{
		cout<<"\nA is Big";
	}
	else
	{
		cout<<"\nB is Big";	
	}
};

int main()
{
	A objA(50);
	objA.getA();
	B objB(20);
	objB.getB();
	max(objA,objB);
	return 0;
}