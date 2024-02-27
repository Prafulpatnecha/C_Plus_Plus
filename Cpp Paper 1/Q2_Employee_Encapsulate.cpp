#include<iostream>
using namespace std;

class Employee
{
	int salary;
	string name,designation;
	
	public :
		void set()
		{
			cout << "Enter Name : ";
			getline(cin,name);
			cout << "Enter Salary : ";
			cin >> salary;
			cin.ignore();
			cout << "Enter Designation : ";
			getline(cin,designation);
		}
		void get()
		{
			cout << "Name Is " << name << endl;
			cout << "Salary : " << salary << endl;
			cout << "Designation : " << designation << endl;
		}
	
};

int main()
{
	Employee employee;
	employee.set();
	employee.get();
	return 0;
}
//2.Define a class named `Employee` with private attributes `name`, `salary`, and `designation`. 
//Encapsulate these attributes using appropriate access specifiers. Implement public member 
//functions to set and get the values of these attributes. Demonstrate the encapsulation concept 
//by accessing these attributes through the member functions.
