#include<iostream>
using namespace std;
class _Time
{
	int h,m,o;
	float s;
	public :
		void _input()
		{
			cout << "Enter The Value Any : ";
			cin >> s;
		}
		void _output()
		{
			s/=3600;
			h=s;
			s-=h;
			s*=60;
			m=s;
			s-=m;
			s=s+0.01;
			s*=60;
			o=s;
			cout <<h<<":"<<m<<":"<< o;
		}
};

int main()
{
	_Time t1;
	t1._input();
	t1._output();
}
//Q.3 Write a program to convert second into hh: mm: ss.
