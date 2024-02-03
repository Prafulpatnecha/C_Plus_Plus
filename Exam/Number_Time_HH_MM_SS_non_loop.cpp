#include<iostream>
using namespace std;
#include<string.h>

class Time
{
	public:
		int s,h,m;
		float sec;
		void inputSec()
		{
			cout << "Enter Second : ";
			cin >> sec;
		}
		void Process()
		{
			sec/=3600;
			h=sec;
			sec-=h;
			sec*=60;
			m=sec;
			sec-=m;
			sec=sec+0.01;
			sec*=60;
			s=sec;
			cout << endl << h << ":" << m << ":" << s;
		}
};

int main()
{
	Time t;
	t.inputSec();
	t.Process();
	return 0;
}

//Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
//For example,
//Input:
//Enter seconds: 4520
//
//Output:
//1:15:20
