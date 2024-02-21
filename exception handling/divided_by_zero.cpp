#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "Enter The Value A : ";
	cin >> a;
	cout << "Enter The Value B : ";
	cin >> b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout << "Divided : " << a/b;
		}
	}
	catch(int y)
	{
		cout << "You Entered Zero Does Not Allow!!";
	}
	return 0;
}

//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a number cannot be divided by zero
