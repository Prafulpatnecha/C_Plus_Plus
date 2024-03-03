#include<iostream>
using namespace std;

class Complex
{
	int a,b,total;
	public:
		void set()
		{
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			cout << a << " - " << b << "j" << endl << endl;
		}
		void get()
		{
			cout << a << " - " << b << "j" << endl << endl;
		}
		Complex operator+(Complex &m2)
		{
			Complex box;
			int y=this->b+m2.b;
			int n=y%10;
			y/=10;
			int x=this->a+y+m2.a;
			box.a=x;
			box.b=n;
			return box;
		}
};
int main()
{
	Complex m1,m2,m3;
	m1.set();
	m2.set();
	
	m3=m1+m2;
	m3.get();
	return 0;
}
//5. Overload the `+` operator for a class `Complex` representing a Complex number 
//(For example, a complex number looks like 4 - 7j). Create two `Complex` objects and 
//demonstrate the use of the overloaded `-` operator to subtract them.
