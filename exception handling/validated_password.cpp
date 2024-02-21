#include<iostream>
using namespace std;
int main()
{
	int ck=0,i;
	string pass;
	cout << "Enter Your PassWord : ";
	getline(cin,pass);
	int len=pass.length();
//	cout << len;
	for(i=0; i<=len; i++)
	{
		if(pass[i]>='A' && pass[i]<='Z')
		{
			ck++;
		}
	}
	try
	{
		if(ck>0)
		{
			cout << "PassWord Is Perfact";
		}
		else
		{
			throw ck;
		}
	}
	catch(...)
	{
		cout << "Dose Not Perfact PassWord Uapper Case!!";
	}
	return 0;
}

//Q.1 Write a Program to implement exception handling mechanism for different types of scenarios:
//- a password cannot be validated if it doesn’t contains an uppercase letter
