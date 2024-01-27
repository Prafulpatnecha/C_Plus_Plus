#include<iostream>
using namespace std;

main()
{
	int feet,inc;
	cout << "Enter feet :";
	cin >> feet;
	cout << "Enter inches :";
	cin >> inc;
	
	feet= feet + (inc/12);
	inc = inc%12;
	cout << "feet - " << feet << "," << "Inch - " << inc;
}

//Q.3 Write a program to read and print distance for feet and inches.
//For example,
//input : 
//Enter feet: 6
//Enter inches: 40
//
//output: Feet - 9, Inch - 4
