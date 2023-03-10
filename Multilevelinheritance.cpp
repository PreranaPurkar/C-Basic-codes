//Write a program of Multilevel Inheritance
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
};
class Internal:public Student
{
	public:
		int im1,im2,total;
		void setInternal(){
			cout<<"\nEnter the marks of math1 and Math2:";
			cin>>im1>>im2;
			total=im1+im2;
		}
	
};
class Result:public Internal
{
	private:
		int perc;
	public:
		void setPercentage(){
			perc=total/2;	
		}
		void showResult(){
			cout<<"\nStudent ID="<<id;
			cout<<"\nStudent Name="<<name;
			cout<<"\nInternal Marks of Math1="<<im1;
			cout<<"\nInternal Marks of Math2="<<im2;
			cout<<"\nTotal="<<total;
			cout<<"\nPercentage="<<perc;
		}
};
int main()
{
	Result R;
	R.setStudent();
	R.setInternal();
	R.setPercentage();
	R.showResult();
	return 0;
}