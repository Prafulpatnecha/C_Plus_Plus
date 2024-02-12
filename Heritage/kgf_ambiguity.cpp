#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

class A
{
	protected:
	int gun=0,firekgf;
};
class B:public A
{
	protected:
		void get()
		{
			gun+=20;
		}
};
class C:public B
{
	protected:
		void get()
		{
			gun+=20;
		}
};
class D:public C
{
	protected:
		void get()
		{
			gun+=20;
		}
};
class E:public D
{
		protected:
		void get()
		{
			gun+=20;
		}
};
class F:public E
{
		public:
		void fire()
		{
			B::get();
			C::get();
			D::get();
			E::get();
			firekgf=gun+20;
			cout << "Kgf : " << firekgf;
		}
};
int main()
{
	F f;
	f.fire();
	return 0;
}
