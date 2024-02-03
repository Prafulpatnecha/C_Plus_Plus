#include<iostream>
using namespace std;
#include<string.h>

class _Distances
{
	public : 
	int feet,inch,i;
		void Input_()
		{
			cout << "Enter Feet : ";
			cin >> feet;
			cout << "Enter Inch : ";
			cin >> inch;
			i=inch/12;
			inch%=12;
			feet=feet+i;
		}
		
		void Output_()
		{
			cout << endl << "Feet : " << feet << " " << "Inch : " << inch << endl;
		}
};

int main()
{
	bool b=false;
	int n=2;
	_Distances d1[n];
	int i,add1,add2;
	for(i=0; i<n; i++)
	{
		d1[i].Input_();
	}
	i=0;
	add1=d1[i].feet+d1[i+1].feet;
	add2=d1[i].inch+d1[i+1].inch;
	for(i=0; i<n; i++)
	{
		d1[i].Output_();
	}
	cout << endl << "Feet : " << add1 << endl << "Inch : " << add2;
	return b;
}
//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch
