#include<iostream>
using namespace std;

class A
{
	protected :
		int a;
};
class B
{
	protected :
		int a;
};
class C : public A,public B
{
	public:
	void getter()
	{
		cout << "Enter The Value A::a Addition : ";
		cin >> A::a;
		cout << "Enter The Value B::a Addition : ";
		cin >> B::a;
		cout << A::a << " + "<<B::a << " = " << A::a+B::a;
	}
};

int main()
{
	C c;
	c.getter();
	return 0;
}
//Q.2 Write a Program to demonstrate the use of a scope resolution operator to 
//solve ambiguity errors.
