#include<iostream>
using namespace std;
class student
{
	private:
		int id;
		char name[20];
	public:
		void setData();
		void getData();
};
void student::setData()
{
	cout<<"\nEnter the ID and Name for Student:";
	cin>>id>>name;
}
void student::getData()
{
	cout<<"\nID="<<id;
	cout<<"\nName="<<name;
}
class employee
{
	private:
		int id;
		char name[20];
	public:
		void setData();
		void getData();
};
void employee::setData()
{
	cout<<"\nEnter the ID and Name for employee:";
	cin>>id>>name;
}
void employee::getData()
{
	cout<<"\nID="<<id;
	cout<<"\nName="<<name;
}
int main()
{
	student s;
	s.setData();
	s.getData();
	employee e;
	e.setData();
	e.getData();
	return 0;
}