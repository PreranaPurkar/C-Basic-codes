#include<iostream>
using namespace std;
class Student
{
	public:
		int id;
		char name[20];
		void setStudent(){
		cout<<"\nEnter the ID and Name:";
		cin>>id>>name;
	}
};
class Internal:public Student
{
	public:
		int im1,im2;
		void setInternal(){
			cout<<"\nEnter the Inrernal marks for Math1 and Math2: ";
			cin>>im1>>im2;
		}
		void getInternalResult(){
			cout<<"\n Student Id:"<<id;
			cout<<"\nStudent Name:"<<name;
			cout<<"\nInternal marks of Math1:"<<im1;
			cout<<"\nInternal marks of Math2:"<<im2;
		}
};
class External
{
	public:
	int em1,em2;
	void setExternal(){
		cout<<"\nEnter the External marks of Math1,Math2:";
		cin>>em1>>em2;
	}	
};
class Result:public Internal,public External
{
	private:
			int totalm1,totalm2;
		public:
		void calculateTotal(){
			totalm1=im1+em1;
			totalm2=im2+em2;	
		}
		void showResult(){
		cout<<"\nInternal marks of M1="<<im1;
		cout<<"\nExternal marks of M1="<<em1;
		cout<<"\nTotal Internal Marks of M1 & M2="<<totalm1;
		cout<<"\nInternal marks of M2="<<im2;
		cout<<"\nExternal marks of M2="<<em2;
		cout<<"\nTotal External Marks of M1 & M2="<<totalm2;	
		}		
};
int main()
{
	Result R;
	R.setInternal();
	R.setExternal();
	R.calculateTotal();
	R.showResult();	
	return 0;
	
}