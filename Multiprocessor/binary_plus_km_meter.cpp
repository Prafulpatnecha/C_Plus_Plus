#include<iostream>
using namespace std;

class Distances
{
	protected:
		int km,meter;
	public:
	void setter()
	{
		cout << "Enter Kmeter : ";
		cin >> this->km;
		cout << "Enter Meter : ";
		cin >> this->meter;
	}
	void getter()
	{
		cout << "Km : " << this->km << endl << "Meter : " << this->meter <<endl;
	}
	Distances operator+(Distances &m2)
	{
		Distances box;
		int total=this->meter+m2.meter;
		int x=total/1000;
		int y=total%1000;
		total=x + this->km + m2.km;
		box.km=total;
		box.meter=y;
		return box;
	}
};

int main()
{
	Distances m1,m2,m3;
	m1.setter();
	m2.setter();
	m3 = m1 +m2;
	m3.getter();
	return 0;
}
//Q.2 Write a Program to add two distances using binary plus (+) operator overloading.
//
//For example,
//Input:
//input1 => Km: 3, Meter: 1020
//input2 => Km: 2, Meter: 2050
//
//Output:
//Km: 8, Meter: 70
