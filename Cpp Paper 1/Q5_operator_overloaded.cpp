#include<iostream>
using namespace std;

class Employee
{
	int salary;
	public:
		void set(int i)
		{
			cout << "Enter "<< i <<" Employee Salary : ";
			cin >> salary;
		}
		void display()
		{
			cout << "Total Salary Employee : " << salary;
		}
	Employee operator+(Employee &a2)
	{
		Employee box;
		box.salary = this->salary+a2.salary;
		return box;
	}
};

int main()
{
	int i=1;
	Employee a1,a2,a3;
	a1.set(i);
	i++;
	a2.set(i);
	a3=a1+a2;
	a3.display();
	return 0;
}
//5. Overload the `+` operator for the `Employee` class to add the salaries of two employees. 
//Create two `Employee` objects and demonstrate the use of the overloaded `+` operator to 
//calculate and display the total salary.
