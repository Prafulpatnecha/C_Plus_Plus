#include<iostream>
using namespace std;

class Shape
{
	protected:
	int l,w;
	float r,a;
	public:
	virtual void calculateArea()=0;
	virtual void draw()=0;
};
class Circle : public Shape
{
	const float pi=3.14;
	public:
		void calculateArea()
		{
			cout << "Enter Circle R : ";
			cin >> r;
			a=pi*r*r;
		}
		void draw()
		{
//			cin.ignore();
//			cout << "Enter Color : ";
//			getline(cin,color);
			cout << endl << "========================================================="<< endl;
			cout << "Area Of Circle : " << a << endl;
		}
};
class Rectangle:public Shape
{
	public:
		void calculateArea()
		{
			cout << "Enter Rectangle L : ";
			cin >> l;
			cout << "Enter Rectangle W : ";
			cin >> w;
			a=l*w;
		}
		void draw()
		{
//			cin.ignore();
//			cout << "Enter Color : ";
//			getline(cin,color);
			cout << endl << "========================================================="<< endl;
			cout << "Area Of Rectangle : " << a << endl;
		}
};
int main()
{
	Shape *ptr[2];
	Circle c;
	Rectangle r;
	ptr[0]=&c;
	ptr[1]=&r;
	
	ptr[0]->calculateArea();
	ptr[1]->calculateArea();
	ptr[0]->draw();
	ptr[1]->draw();
	
	return 0;
}
//7. Define an abstract class `Shape` with pure virtual functions `calculateArea()` and 
//`draw()`. Implement concrete/normal classes `Circle` and `Rectangle` that inherit from 
//`Shape`. Demonstrate polymorphism by creating an array of `Shape` pointers pointing 
//to objects of both `Circle` and `Rectangle`. Call the `calculateArea()` and `draw()` 
//functions for each object.
