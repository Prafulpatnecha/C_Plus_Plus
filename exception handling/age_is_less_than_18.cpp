#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter The Value : ";
	cin >> age;
	try
	{
		if(age < 18)
		{
			throw age;
		}
		else 
		{
			cout << "You Are Eligible";
		}
	}
	catch(int no)
	{
		cout << "You Not Are Eligible!!";
	}
	return 0;
}

//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a person cannot be able to vote if his/her age is less than 18
