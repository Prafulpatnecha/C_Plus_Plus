#include<iostream>
using namespace std;

class Max
{
	protected:
	int a;
	public:
		void setter(string find)
		{
			cout << "Enter The Value Of "<< find <<" : ";
			cin >> this->a;
		}
		void getter()
		{
			if(a<1)
			{
				cout << "m1 is maximum";
			}
			else
			{
				cout << "m2 is maximum";
			}
		}
		Max operator<(Max &m2)
		{
			Max box;
			int n=this-> a < m2.a;
			box.a=n;
			return box;
		}
};

int main()
{
	Max m1,m2,m3;
	m1.setter("m1");
	m2.setter("m2");
	m3= m1 < m2;//m1.operator+(m2)
	m3.getter();
	return 0;
}
//Q.1 Write a Program to overload < operator to find which object contains a 
//higher value from given 2 numbers.
