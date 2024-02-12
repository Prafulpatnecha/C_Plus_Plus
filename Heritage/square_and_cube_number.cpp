#include<iostream>
using namespace std;
class A
{
	protected:
		int cu,sq,number;
		
		void get(string ok)
		{
			cout << "Enter Number "<< ok <<" : ";
			cin >> number;
		}
};
class B : public A
{
	public :
		void square()
		{
			string s="Square";
			get(s);
			sq=number*number;
			cout << "Square : " << sq <<endl;
		}
};
class C : public A
{
	public :
		void cube()
		{
			string c="Cube";
			get(c);
			cu=number*number*number;
			cout << "Cube : " << cu;
		}
};

int main()
{
	B b;
	C c;
	b.square();
	c.cube();
	return 0;
}
//Q.2 Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

