#include<iostream>
using namespace std;

class Area
{
	protected:
	int a,b,triangle,rectangle,radius;
	float area,pi=3.14;
	virtual void calculate()=0;
//	virtual void setter()=0;
};
class Circle : public Area
{
	public:
	void calculate()
	{
		cout << "Enter The Value Of Circle Radius : ";
		cin >> radius;
//		pi*r*r;
		area=pi*radius*radius;
		cout << "Area Of Circle : " << area << endl;
	}
};
class Triangle:public Area
{
	public:
	void calculate()
	{
		cout << "Enter The Value Of Base : ";
		cin >> a;
		cout << "Enter The Value Of Height : ";
		cin >> b;
//		a*b/2
		triangle=a*b/2;
		cout << "Area Of Triangle : " << triangle << endl;
	}
};
class Rectangle : public Area
{
	public :
	void calculate()
	{
		cout << "Enter The Value Of Length : ";
		cin >> a;
		cout << "Enter The Value Of Width : ";
		cin >> b;
//		A=w*l;
		rectangle=a*b;
		cout << "Area Rectangle : " << rectangle <<  endl;
	}
};

int main()
{
	Circle c;
	Triangle t;
	Rectangle r;
	c.calculate();
	t.calculate();
	r.calculate();
	return 0;
}
//Q.1 Write a Program to perform some basic mathematical operations using an Abstract class such as:
//- the area of a circle
//- the area of a triangle
//- the area of a rectangle
//- use one single pure virtual function named calculate() to perform all the above operations
