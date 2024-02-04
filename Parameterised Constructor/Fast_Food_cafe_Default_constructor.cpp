#include<iostream>
using namespace std;
#include<string.h>
class Cafe
{
	int id,year,staff;
	string name,type,location;
	float rating;
	public : 
	
	Cafe()
	{
		cout << "Welcome To My Cafa" << endl;
	}
	void InputFast()
	{
		cout << "Enter Fast Food Cafe Id : ";
		cin >> id;
			cin.ignore();
		cout << "Enter Fast Food Cafe Name : ";
		getline(cin,name);
		cout << "Enter Fast Food Cafe Type : ";
		getline(cin,type);
		cout << "Enter Fast Food Cafe Rating : ";
		cin >> rating;
			cin.ignore();
		cout << "Enter Fast Food Cafe Location : ";
		getline(cin,location);
		cout << "Enter Fast Food Cafe Establish Year : ";
		cin >> year;
		cout << "Enter Fast Food Cafe Staff Quantity : ";
		cin >> staff;
	}
	void Output()
	{
		cout << endl << "Cafe Id : " << id << endl <<
		"Cafe Name Is " << name << endl << "Cafe Type : " << type << endl << "Cafe Rating : " << rating
		 << " Star" << endl << "Cafe Location : " << location << endl << "Cafe Establish Year : " << year
		 << endl << "Cafe Staff Quantity : " << staff << endl;
	}
};


int main()
{
	int n,i=0;
	bool b=false;
	Cafe c1;
	
		c1.InputFast();
		c1.Output();
	return b;
}

//Q.2 Write a Program to get and display of Fast Food cafe information using encapsulation and the use of a Default constructor by including the below-mentioned attributes:
//- cafe_id
//- cafe_name
//- cafe_type (like a rooftop or normal)
//- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
//- cafe_location (city name)
//- cafe_establish_year
//- cafe_staff_quantity
