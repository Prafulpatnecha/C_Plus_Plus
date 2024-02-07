#include<iostream>
#include<string.h>
using namespace std;
class X
{
	protected:
		int a,b,c,sum;
		void cube()
		{
			a=a*a*a;
			b=b*b*b;
			c=c*c*c;
		}
};
class Y:public X
{
	public :
	void getData()
	{
		cout << "Enter A : ";
		cin >> a;
		cout << "Enter B : ";
		cin >> b;
		cout << "Enter C : ";
		cin >> c;
		cube();
	}
	void setData()
	{
		sum=a+b+c;
		cout << "Single-Level Inheritance Sum Of Cube : " << sum << endl;
	}
};
int size()
{
	int n;
	cout << "Enter Size Of Class Number : ";
	cin >> n;
	return n;
}
int main()
{
	int n=size(),i;
	Y add[n];
	for(i=0; i<n; i++)
	{
		add[n].getData();
		add[n].setData();
	}
	
	return 0;
}

//Q.1 Write a Program to find the sum of all three number’s cubes by implementing single-level inheritance: Class X->Class Y
//- Class X has the following members: a, b & c attributes in integer data type
//- Class Y has the following members: setData() and getData() methods
