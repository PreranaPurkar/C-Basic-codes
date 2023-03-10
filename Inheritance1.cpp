//Write a program to create Single Inheritance
#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		char name[20];
	void setStudent(){
		cout<<"\nEnter the Student ID and Name:";
		cin>>id>>name;	
	}
	void getStudent(){
		cout<<"\nStudent Id:"<<id;
		cout<<"\nStudent Name:"<<name;	
	}
};
class Teacher:public Student
{
	public:
	void setTeacher(){
	cout<<"\nEnter the Teacher ID and Name:";
	cin>>id>>name;
	}
	void getTeacher(){
	cout<<"\nTeacher Id:"<<id;
	cout<<"\nTeacher Name:"<<name;
	}
};

int main()
{
	Teacher t;
	t.setStudent();
	t.getStudent();
	t.setTeacher();
	t.getTeacher();
	return 0;
}