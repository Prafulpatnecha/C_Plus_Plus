#include<iostream>
using namespace std;

class Employee
{
	protected:
	static string company_name;
	int employee_salary;
	public:
	void myAccess()
	{
		cout << "( Employee )" << endl;
		cout << "Company Name Is " << company_name << endl;
		cout << "Employee Salary : " << employee_salary << endl;
	}
	//company_name
	//employee_salary
};

class Manager:virtual public Employee
{
	protected:
	int manager_salary,total_staff;
	string can_terminate;
	public:
	void myAccess()
	{
		cout << "[ manage ]" << endl;
		cout << "Company Name Is " << company_name << endl;
		cout << "Manager Salary : " << manager_salary << endl;
		cout << "Employee Salary : " << employee_salary << endl;
		cout << "Total Staff : " << total_staff << endl;
		cout << "Can Terminate : " << can_terminate << endl;
	}
};
class Admin:virtual public Manager
{
	int total_annual_revenue;
	public:
	void developer()
	{
		cout << "Company Name Is " << company_name << endl;
		cout << "Manager Salary : ";
		cin >> manager_salary;
		cout << "Employee Salary : ";
		cin >> employee_salary;
		cout << "Total Staff : ";
		cin >> total_staff;
		cout << "Total Annual Revenue : ";
		cin >> total_annual_revenue;
			cin.ignore();
		cout << "Can_Terminate : ";
		getline(cin,can_terminate);
	}
	void myAccess()
	{
		cout << "{ Admin }" << endl;
		cout << "Company Name Is " << company_name << endl;
		cout << "Manager Salary : " << manager_salary << endl;
		cout << "Employee Salary : " << employee_salary << endl;
		cout << "Total Staff : " << total_staff << endl;
		cout << "Total Annual Revenue : " << total_annual_revenue << endl;
		cout << "Can Terminate : " << can_terminate << endl;
	}
};

string Employee::company_name="OMG";

int main()
{
	Admin a1;
	a1.developer();
	a1.myAccess();
	a1.Manager::myAccess();
	a1.Employee::myAccess();
	return 0;
}
//Q.1 Write a Program to abstract some attributes of class Admin to prevent them to 
//be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class Employee
//- Class Admin has the following members:
//company_name
//manager_salary
//employee_salary
//total_staff
//total_annual_revenue
//can_terminate
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class 
//members' values accordingly.

