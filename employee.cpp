#include<iostream>
using namespace std;
class employee
{
	private:
		int empid;
		char empname[20];
		float empsal;
	public:
		void setEmployee()
		{
			cout<<"\nEnter the Employee id:";
			cin>>empid;
			cout<<"\nEnter the Employee Name:";
			cin>>empname;
			cout<<"\nEnter the Employee Salary:";
			cin>>empsal;	
		}
		void getEmployee()
		{
			cout<<"\nEmployee Id:"<<empid;
			cout<<"\nEmployee Name:"<<empname;
			cout<<"\nEmployee Salary:"<<empsal;
		}
	};
		
	int main()
	{
		employee e;
		e.setEmployee();
		e.getEmployee();
		return 0;
	}
	