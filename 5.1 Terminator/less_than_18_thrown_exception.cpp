#include<iostream>
using namespace std;

int main()
{
	int age;
	cout << "Enter Your Age : ";
	cin >> age;
	
	try
	{
		if(age>18)
		{
			cout << "You Are eligible to vote" << endl;
		}
		else
		{
			throw 0;
		}
	}
	catch(...)
	{
		cout << "You Are Does Not eligible to vote!!";
	}
	return 0;
}
//Q.2 Write a Program to throw 0 if the age of the user is less than 18, otherwise print 
//that you are eligible to vote. Also, handle that thrown exception and print you are 
//not eligible to vote.
