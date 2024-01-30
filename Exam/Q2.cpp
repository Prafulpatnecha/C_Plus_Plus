#include<iostream>
using namespace std;

class Time
{
	public : 
	int s,h,m,i;
	void input()
	{
		cout << "Enter seconds : ";
		cin>>s;
	}
	void output()
	{
		m=0;
		h=0;
		for(i=0; i<=s; i++)
		{
			if(s>=60)
			{
				s-=60;
				m++;
			}
			if(m>=60)
			{
				m-=60;
				h++;
			}
		}
			cout <<endl << h << ":" << m <<":" << s<<endl;
	}
};

int main()
{
	Time s1;
	
		s1.input();
		s1.output();
	return 0;		
}
//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
