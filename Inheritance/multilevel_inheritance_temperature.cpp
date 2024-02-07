#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class P
{
	protected :
		float t,c,f,k,n3=273.15;
		int n=9,n1=32,n2=5;
		void input()
		{
			cout << "Enter Degree Celsius Temperature : ";
			cin >> c;
		}
};
class Q:public P
{
	protected:
//		Degree Celsius --> Fahrenheit
//		(°C × 9/5) + 32 = °F
	void toFehrenheit()
	{
		f=(c*n/n2)+n1;
	}
};
class R:public Q
{
//		Fahrenheit --> Kelvin
//		(°F - 32) × 5/9 + 273.15 = K
	public:
	void toKelvin()
	{
		input();
		toFehrenheit();
		t=(f-n1)*n2/n+n3;
	}
	void Output()
	{
		toKelvin();
		cout << "Fehrenheit : " << f << endl << "Kelvin : " << t << endl;
	}
};
int main()
{
	R c;
	c.Output();
	return 0;
}

/*Q.2 Write a Program to convert a given degree Celsius temperature into Fahrenheit and convert 
that Fahrenheit temperature into Kelvin by implementing multilevel inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method.*/
