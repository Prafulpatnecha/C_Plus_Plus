#include<iostream>
#include<conio.h>
using namespace std;

class Cricket
{
	protected:
		int a,i;
		void getTotalOvers(int i)
		{
			this->i=i;
			cout << "Cricket Match " << this->i << endl;
		}
};
class T20Match :public Cricket
{
	public:
		void getTotalOvers(int a)
		{
			int o=2024;
			Cricket::getTotalOvers(2024);
			this->a=a;
			cout << "Cricket Match : " << this->a << endl;
		}
};
class ODIMatch:public Cricket
{
	public:
		void getTotalOvers(int a)
		{
			this->a=a;
			cout << "Cricket Match : " << this->a;
		}
};

int main()
{
	T20Match h;
	ODIMatch o;
	h.getTotalOvers(20);
	o.getTotalOvers(50);
	return 0;
}
//Q.2 Write a Program to implement method overriding by following the 
//below-mentioned criteria:
//- Class Cricket -> Class T20Match = 20
//- Class Cricket -> Class ODIMatch = 30
//- Override the getTotalOvers() method in both classes.
