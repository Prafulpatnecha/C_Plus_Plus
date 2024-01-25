#include<iostream>
using namespace std;

main()
{
	int one,two;
	cout << "Enter the first number : " ;
	cin >> one;
	cout << "Enter the Second number : " ;
	cin >> two;
	int n=two-one;
	n/=2;
	int a[n];
	int i,j=0;
	if(one>=1900)
	{
		cout << "The array is : ";
		for(i=one; i<=two; i++)
		{
			if(i%4==0)
			{
				a[j]=i;
				cout << a[j] << ", ";
				j++;
			}
		}
	}
	else
	{
		cout << "Pleace Up To First 1900!!";
	}
}


//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040
