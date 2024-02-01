#include<iostream>
using namespace std;
#include<string.h>

class _Hotal
{
	int id,staff,room;//int values find way.
	float rating;//float for star find to esey way.
	string location,type;//only string decl
	static int year;//value are static
	static string hotalName;//string will be static
	public ://mathod are public encap
	
		void _hotalInput()//udf input define for class-objact
		{
			cout << "Enter your Id : ";
			cin>>id;
				cin>>
		}
		void _hotalOutput()//udf Output define saction.
		{
			
		}
	
};
//- hotel_id
//- hotel_name -static
//- hotel_type (like hotel or motel)
//- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
//- hotel_location (city name)
//- hotel_establish_year - static
//- hotel_staff_quantity
//- hotel_room_quantity
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