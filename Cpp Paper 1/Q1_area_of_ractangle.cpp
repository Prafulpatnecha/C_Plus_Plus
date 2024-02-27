#include<iostream>
using namespace std;

class Rectangle
{
	int length,width;
	public:
	void sat()
	{
		cout << "Enter Length : ";
		cin >> length;
		cout << "Enter Width : ";
		cin >> width;
	}
	void get()
	{
		cout << "Area Of Rectangle : " << length*width;
	}
};

int main() 
{
	Rectangle lr;
	lr.sat();
	lr.get();
	return 0;
}
//1.Define a class named Rectangle with private attributes length and width. Implement public 
//member functions to set and get the values of these attributes. Include a method to calculate the 
//area of the rectangle. Create an object of the Rectangle class and demonstrate the functionality 
//of the implemented methods.
