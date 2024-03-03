#include<iostream>
using namespace std;

class Person
{
	int age;
	string name,address;
	public:
		Person(string name,string address,int age)
		{
			setter(name,address,age);
		}
		void setter(string name,string address,int age)
		{
			this->name= name;
			this->address= address;
			this->age= age;
		}
		void getter()
		{
			cout << endl << "{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}" << endl;
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Address : " << address << endl;
			cout << "{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}{}" << endl;
		}
};
int main()
{
	int n,age;
	int i;
	string name,address;
	cout << "Enter N : ";
	cin >> n;
	Person p[n] = Person(name,address,age);
	cin.ignore();
	for(i=0; i<n; i++)
	{
		cout << "Enter Name : ";
		getline(cin,name);
		cout << "Enter Age : ";
		cin >> age;
		cin.ignore();
		cout << "Enter Address : ";
		getline(cin,address);
		p[i]=Person(name,address,age);
	}
	for(i=0; i<n; i++)
	{
		p[i].getter();
	}
	return 0;
}
//2. Define a class `Person` with private attributes `name`, `age`, and `address`. 
//Encapsulate these attributes using getter and setter methods. Implement a parameterized
//constructor for the `Person` class. Create N number of objects using this constructor 
//and display the details.
