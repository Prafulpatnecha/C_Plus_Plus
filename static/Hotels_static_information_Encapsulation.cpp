#include<iostream>
using namespace std;
#include<string.h>

class _Hotal
{
	int id,staff,room;//int values find way.
	float rating;//float for star find to esey way.
	string type,location;//only string decl
	static int year;//value are static
	static string hotalName;//string will be static
	public ://mathod are public encap
	
		void _hotalInput()//udf input define for class-objact
		{
			cout<<"Hotal Name Is "<<hotalName<<endl<<"Hotel Establish Year Is "<<year<<endl<<"==============================================================================================================="<<endl;
			cout << "Enter your Id : ";
			cin>>id;
				cin.ignore();
			cout << "Enter Hotel Type (like hotel or motel) : ";
			getline(cin,type);
			cout << "Enter Hotel Rating (like 1 Star, 2 Start, ..., 7 Star) : ";
			cin>> rating;
			cin.ignore();
			cout << "Hotel Location : ";
			getline(cin,location);
			cout<<"Hotel Staff Quantity : ";
			cin>>staff;
			cout<< "Hotel Room Quantity : ";
			cin>>room;
		}
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
		void _hotalOutput()//udf Output define saction.
		{
			cout<<"Hotal Name Is "<<hotalName<<endl<<"Hotel Establish Year Is "<<year<<endl<<"==============================================================================================================="<<endl;
			cout<< endl << "Id : "<< id << endl << "Hotal Type Are : " << type << endl << "Hotal Rating : "
			<< rating << " Star" << endl << "Hotal Location : " << location << endl << "Staff Quantity : "
			<< staff << endl << "Hotal Room Quantity Is " << room << endl;
		}
	
};

//static decl
string _Hotal::hotalName="Namo";
int _Hotal::year=2004;

int _Size()//size Of objact
{
	int n;
	cout<<"Enter Size Of Hotal Class Data : ";
	cin>>n;
	return n;//return only size.
}
int main()
{
	bool b=false;
	int n=_Size();
	_Hotal h[n];
	int i;
	for(i=0; i<n; i++)
	{
		cout<<endl<<"===============================================================================================================" << endl
		<<"Hotal Rating Record ("<<i+1<<")"<<endl;
		h[i]._hotalInput();
	}
	for(i=0; i<n; i++)
	{
		cout<< endl <<"==============================================================================================================="<<
		endl <<"Hotal Rating Record ("<<1+i<<")"<<endl;
		h[i]._hotalOutput();
	}
	return b;
}
//Q.1 Write a Program to get and display Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
