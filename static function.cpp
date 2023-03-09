//Write a code of Employee by using static function
#include<iostream>
using namespace std;
class employee
{
	private:
		char ename[10];
		int eid;
		float esalary;
		static float total;
	public:
		void setEmployee()
		{
			cout<<"\nEnter the Employee Name,ID and Salary: ";
			cin>>ename>>eid>>esalary;
			total=total+esalary;
		}
		void getEmployee()
		{
			cout<<"\nEmployee ID:"<<eid;
			cout<<"\nEmployee Name:"<<ename;
			cout<<"\nEmployee Salary:"<<esalary;
		}
		static void getTotal()
		{
			cout<<"\nTotal Salry="<<total;
		}
		
};
float employee::total=0.0;
int main()
{
	employee e1,e2,e3;
	e1.setEmployee();
	e2.setEmployee();
	e3.setEmployee();
	e1.getEmployee();
	e2.getEmployee();
	e3.getEmployee();
	employee::getTotal();
	return 0;
}