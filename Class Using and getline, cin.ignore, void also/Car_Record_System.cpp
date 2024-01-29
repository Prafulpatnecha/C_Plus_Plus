#include<iostream>
using namespace std;
#include<string.h>
class Car
{
	string car_company_name,car_model,car_color;
	int car_id,car_release_year;
	
	public :
		void _record_input()
		{
			cout << "Enter Your Car Id : ";
			cin >> car_id;
				cin.ignore();
			cout << "Enter Car Company Name : ";
			getline(cin,car_company_name);
			cout << "Enter Car Color : ";
			getline(cin,car_color);
			cout << "Enter Car Model : ";
			getline(cin,car_model);
			cout << "Enter Car Release Year : ";
			cin >> car_release_year;
		}
		void _Output()
		{
			cout << "Car Id : " << car_id << endl << "Car Company Name : " << car_company_name << endl << "Car Model : " <<  car_model << endl << "Car Color : " << car_color << endl <<"Car Release Year : "<< car_release_year;
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
	int n=size(),i;
	Car m[n];
	for(i=0;i<n;i++)
	{
		cout << "Car Record System ["<<i+1<<"]" << endl;
		m[i]._record_input();
	}
	for(i=0;i<n;i++)
	{
		cout  << endl << endl << "Car Record System ["<<i+1<<"]" << endl;
		m[i]._Output();
	}
	return 0;
}
//Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year
