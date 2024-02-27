#include<iostream>
using namespace std;

class Shape
{
	protected :
	float area,redius,length,width;
	public:
		void setter()
		{
			cout << "Pollymorphism Method Overriding";
		}
		virtual void display()
		{
			cout << "Only Show Display Virtual!!";
		}
};
class Circle:public Shape
{
	const float pi = 3.14;
	public:
		void setter()
		{
			cout << "Circle" << endl;
			cout << "Enter the Value Redius : ";
			cin >> redius;
		}
		void display()
		{
			area=pi*redius*redius;
			cout << "Area Of Circle : " << area << endl;
		}
};
class Rectangle:public Shape
{
	public:
		void setter()
		{
			cout << "Rectangle" << endl;
			cout << "Enter the Value Lenght : ";
			cin >> length;
			cout << "Enter The Value Width : ";
			cin >> width;
		}
		void display()
		{
			area=length*width;
			cout << "Area Of Rectangle : " << area <<endl;
		}
};

int main()
{
	Shape *ptr[2];
	Rectangle r1;
	Circle c1;
	r1.setter();
	c1.setter();
	ptr[0]=&r1;
	ptr[1]=&c1;
	for(int i=0; i<2; i++)
	{
		ptr[i]->display();
	}
	return 0;
}
//4.Extend the `Shape` hierarchy from Question 3 to include a virtual function `display()`. 
//Implement the `display()` function in each derived class to print information specific to the 
//shape. Create an array of `Shape` pointers, pointing to objects of different shapes. Demonstrate 
//polymorphism by calling the `display()` function for each object.

//3.Define a base class `Shape` with private attributes `color` and `area`. Implement public 
//member functions for setting and getting the color and calculating the area. Derive two classes, 
//`Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area 
//specific to each shape. Demonstrate abstraction by calling the area calculation methods for 
//both `Circle` and `Rectangle`.
