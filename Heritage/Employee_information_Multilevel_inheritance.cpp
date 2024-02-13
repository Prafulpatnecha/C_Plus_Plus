#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
//Multilevel inheritance
class A
{
	protected:
		int id,salary,experience;
		long long contact;
		string name,role,comp_name,address,email;
		void setter()
		{
			cout << "Enter Your Id : ";
			cin >> id;
			cin.ignore();
			cout << "Enter Your Name : ";
			getline(cin,name);
			cout << "Enter Your Role : ";
			getline(cin,role);
		}
};
//id,salary,experience,contact
//name,role,comp_name,address,email,
class B:public A
{
	protected:
	void setter()
	{
		cout << "Enter Your Salary : ";
		cin >> salary;
		cout << "Enter Your Experience : ";
		cin >> experience;
	}
};
class C:public B
{
	protected: 
	void setter()
	{
		cin.ignore();
		cout << "Company Name : ";
		getline(cin,comp_name);
		cout << "Address : ";
		getline(cin,address);
	}
	void getter()
	{
		cout << "Name : " << name << endl;
		cout << "Role : " << role << endl;
		cout << "Salary : " << salary << endl;
	}
};
class D:public C
{
	public:
	void setter()
	{
		A::setter();
		B::setter();
		C::setter();
		cout << "Enter Your Email : ";
		getline(cin,email);
		cout << "Enter Your Contect : ";
		cin >> contact;
	}
		void getter()
		{
			cout << "Id : " << id << endl;
			C::getter();
			cout << "Experience : " << experience << endl;
			cout<< "Company Name Is " << comp_name<<endl;
			cout << "Address : " << address << endl;
			cout << "Email : " << email << endl;
			cout << "Contact : " << contact << endl;
		}
};
int main()
{
	D d;
	d.setter();
	d.getter();
	return 0;
}


//Q.3 Write a Program to read and print Employee information with the use 
//of Multilevel inheritance. (as same the attached image)
