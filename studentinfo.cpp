#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		char name[10];
		float fees;
	public:
		void setStudent()
		{
		cout<<"\nEnter the Student name";
		cin>>name;
		cout<<"\nEnter the Student Rollno";
		cin>>rollno;
		cout<<"\nEnter the Student Fees";
		cin>>fees;
		}
		void getStudent()
		{
			cout<<"\nStudent Name:"<<name;
			cout<<"\nStudent Rollno:"<<rollno;
			cout<<"\nStudent Fees:"<<fees;
		}
};
int main()
{
	student s1,s2,s3;
	s1.setStudent();
	s2.setStudent();
	s3.setStudent();
	s1.getStudent();
	s2.getStudent();
	s3.getStudent();
	return 0;
}