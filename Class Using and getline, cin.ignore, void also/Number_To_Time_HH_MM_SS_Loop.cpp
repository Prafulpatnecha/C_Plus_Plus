#include<iostream>
using namespace std;
class _Time
{
	int h,m,i,s;
	public :
		void _input()
		{
			cout << "Enter The Value Any : ";
			cin >> s;
		}
		void _output()
		{
			h=0;
			for(i=0; i<s; i++)
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
			cout <<h<<":"<<m<<":"<< s;
		}
};

int main()
{
	_Time t1;
	t1._input();
	t1._output();
}
//Q.3 Write a program to convert second into hh: mm: ss.
