#include<iostream>
using namespace std;
#include<string.h>
class Employee
{
	string emp_name,emp_role,emp_city,emp_company_name;
	int emp_id,emp_age,emp_salary,emp_experience;
	public :
	void input()
	{
		cout << "Enter Id : ";
		cin >> emp_id;
			cin.ignore();
		cout << "Enter Your Name : ";
		getline(cin,emp_name);
		cout << "Enter Your Age : ";
		cin >> emp_age;
			cin.ignore();
		cout << "Enter Your Role : ";
		getline(cin,emp_role);
		cout << "Enter Your Salary : ";
		cin >> emp_salary;
			cin.ignore();
		cout << "Enter Your City : ";
		getline(cin,emp_city);
		cout << "Enter Your Experience : ";
		cin >> emp_experience;
			cin.ignore();
		cout << "Enter Your Company Name : ";
		getline(cin,emp_company_name);
	}
	
	void output()
	{
		cout << endl << "Your Id :" << emp_id << endl << "Your Name : " << emp_name << endl << "Your Age : " << emp_age << endl << "Your Role Is " << emp_role << endl << "Your Salary : " << emp_salary << endl << "Your City : " << emp_city << endl << "Your Experience : " << emp_experience << endl << "Your Company Name : " << emp_company_name;
	}
};
int size()
{
	int n;
	cout << "Enter The Size Of Record System : ";
	cin >> n;
	return n;
}
int main()
{
	int i,n=size();
	Employee m[n];
	for(i=0; i<n; i++)
	{
		cout << "Employee Record System ["<< i+1 <<"]" << endl;
		m[i].input();
	}
	for(i=0; i<n; i++)
	{
		cout << endl << endl << "Employee Record System ["<< i+1 <<"]";
		m[i].output();
	}
	return 0;
}

//Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
//- emp_id
//- emp_name
//- emp_age
//- emp_role
//- emp_salary
//- emp_city
//- emp_experience
//- emp_company_name
