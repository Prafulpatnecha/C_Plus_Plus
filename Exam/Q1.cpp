#include<iostream>
using namespace std;

class Create
{
	public : 
	int feet,inc,i;
	void input()
	{
		cout << "Enter Feet : ";
		cin >> feet;
		cout << "Enter Inch : ";
		cin >> inc;
	}
	void output()
	{
		for(i=0; i<=inc; i++)
		{
			if(inc>=12)
			{
				inc-=12;
				feet++;
			}
		}
		cout << "feet : "<< feet <<" ,inch : "<< inc << endl;
	}
};

int main()
{
	int n=2,i;
	Create s[n];
	for(i=0; i<n; i++)
	{
		s[i].input();
		s[i].output();
	}
	i=0;
	int add=s[i].feet+s[i+1].feet;
	int add1=s[i].inc+=s[i+1].inc;
	cout << "Feet : "<< add << ",inch : "<< add1;
	return 0;
}

//Q.1 Write a Program to create a class to read and add two distances.
//For example,
//Input:
//input1 => feet: 8, inch: 16
//input2 => feet: 4, inch: 14
//
//Output:
//14 feet 6 inch
