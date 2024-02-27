#include<iostream>
using namespace std;

class Shape
{
	protected:
	string color;
	float area,width;
	public :
		virtual void calculation() = 0 ;
		void setting()
		{
			cout << "Enter Color : ";
			getline(cin,color);
		}
		void getting()
		{
			cout << "Color : " << color << endl;
			cout << "Area : " << area << endl << endl;
		}
};
class Circle : public Shape
{
	const float pi = 3.14;
	public:
		void calculation()
		{
			cout << "Enter The Value Radius : ";
			cin >> area;
//			pi*r*r.
			area = pi * area * area;
			cin.ignore();
		}
};
class Rectangle : public Shape
{
	public:
		void calculation()
		{
			cout << "Rectangle" << endl;
			cout << "Enter The Length : ";
			cin >> area;
			cout << "Enter The Width : ";
			cin >> width;
			area=area*width;
		}
};

int main()
{
	Circle c1;
	c1.setting();
	c1.calculation();
	c1.getting();
	Rectangle r1;
	r1.setting();
	r1.calculation();
	r1.getting();
	return 0;
}
//3.Define a base class `Shape` with private attributes `color` and `area`. Implement public 
//member functions for setting and getting the color and calculating the area. Derive two classes, 
//`Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area 
//specific to each shape. Demonstrate abstraction by calling the area calculation methods for 
//both `Circle` and `Rectangle`.

//#include<iostream>
//using namespace std;
//
//class Shape
//{
//	protected:
//	string color;
//	float area,width;
//	public :
//		virtual void calculation() = 0 ;
//		void setting(int i)
//		{
//			const string find[2]={"Circle","Rectangle Length"};
//			cout << find[i] <<endl;
//			cout << "Enter Color : ";
//			getline(cin,color);
//			cout << "Enter " << find[i] << " : ";
//			cin >> area;
//			if(i==1)
//			{
//				cout << "Enter Rectangle Width : ";
//				cin >> width;
//			}
//			cin.ignore();
//		}
//		void getting(int i)
//		{
//			const string find[2]={"Circle","Rectangle"};
//			cout << find[i] << endl;
//			cout << "Color : " << color << endl;
//			cout << "Area : " << area << endl << endl;
//		}
//};
//class Circle : public Shape
//{
//	const float pi = 3.14;
//	public:
//		void calculation()
//		{
////			pi*r*r.
//			area = pi * area * area;
//		}
//};
//class Rectangle : public Shape
//{
//	public:
//		void calculation()
//		{
//			area=area*width;
//		}
//};
//
//int main()
//{
//	int i=0;
//	Circle b1;
//	Rectangle a1;
//	Shape *ptr=&b1,*ptr1=&a1;
//	ptr->setting(i);
//	ptr->calculation();
//	i++;
//	ptr1->setting(i);
//	ptr1->calculation();
//	i--;
//	ptr->getting(i);
//	i++;
//	ptr1->getting(i);
//	return 0;
//}
////3.Define a base class `Shape` with private attributes `color` and `area`. Implement public 
////member functions for setting and getting the color and calculating the area. Derive two classes, 
////`Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area 
////specific to each shape. Demonstrate abstraction by calling the area calculation methods for 
////both `Circle` and `Rectangle`.
