#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class Shape
{
	protected:
		int width,height,a;
		void shape_area(string define)
		{
			cout << define << endl;
			cout << "Enter The Value Of Width :";
			cin >> width;
			cout << "Enter The Value Of Height :";
			cin >> height;
		}
		
};
class Triangle:public Shape
{
//	area=(h*w)/2
	public:
		void area()
		{
			string d="Triangle";
			shape_area(d);
			a=(width*height)/2;
			cout << "Area Of Triangle : " << a << endl;
		}
};
class Rectangle:public Triangle
{
//	A=w*l
	public:
		void area()
		{
			string d="Rectangle";
			shape_area(d);
			a=width*height;
			cout << "Area Of Rectangle : " << a << endl;
		}
};

int main()
{
	Triangle tr;
	Rectangle re;
	tr.area();
	re.area();
	return 0;
}
//Q.1 Write a Program that defines a shape class with a constructor that gives value 
//to width and height. Then define two sub-classes triangle and rectangle, that 
//calculate the area of the shape area (). In the main, define two objects a triangle 
//and a rectangle, and then call the area() function using these two objects.
