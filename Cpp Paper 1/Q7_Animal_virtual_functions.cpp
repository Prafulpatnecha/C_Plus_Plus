#include<iostream>
using namespace std;

class Animal
{
	public:
	virtual void sound()
	{
		cout << "Bhau Bhau Polimorphosm!!" << endl;
	}
	virtual void move()
	{
		cout << "Tap Tap" << endl;
	}
};
class Dog : public Animal
{
	public:
	void sound()
	{
		cout << "Dog" << endl << "Bhau Bhau" << endl;
	}
	void move()
	{
		cout << "Runing And Jump" << endl << endl;
	}
};
class Bird : public Animal
{
	public:
	void sound()
	{
		cout << "Bird" << endl << "Chi Chi" << endl;
	}
	void move()
	{
		cout << "Flapping";
	}
};

int main()
{
	Animal *ptr[2];
	Dog d1;
	Bird b1;
	ptr[0]=&d1;
	ptr[1]=&b1;
	int i;
	for(i=0; i<2; i++)
	{
		ptr[i]->sound();
		ptr[i]->move();
	}
	return 0;
}
//7. Define an abstract class `Animal` with virtual functions `sound()` and `move()`. Implement 
//concrete/normal classes `Dog` and `Bird` that inherit from `Animal`. Demonstrate polymorphism by 
//creating an array of `Animal` pointers pointing to objects of both `Dog` and `Bird`. Call the 
//`sound()` and `move()` functions for each object.
