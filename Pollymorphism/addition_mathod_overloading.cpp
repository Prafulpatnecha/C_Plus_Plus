#include<iostream>
#include<string.h>
using namespace std;

class A
{
	protected:
		int a,b,c,d,e;
};
class B:public A
{
	public:
		void calculate(int a,int b)
		{
			this->a=a;
			this->b=b;
			cout << "Division : " << this->a/this->b<< endl;
		}
		void calculate(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			cout << "Subtraction : " << this->a-this->b-this->c <<endl;
		}
		void calculate(int a,int b,int c,int d)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			cout << "Multiplication : " << this->a*this->b*this->c*this->d << endl;
		}
		void calculate(int a,int b,int c,int d,int e)
		{
			this->a=a;
			this->b=b;
			this->c=c;
			this->d=d;
			this->e=e;
			cout << "Addition : " << this->a+this->b+this->c+this->d+this->e << endl;
		}
};
int main()
{
	B b1;
	string add[5]={"A","B","C","D","E"};
	int i,ad[5];
	for(i=0; i<5; i++)
	{
		cout << "Enter " << add[i] << " : ";
		cin >> ad[i]; 
	}
	int a=ad[0],b=ad[1],c=ad[2],d=ad[3],e=ad[4];
	b1.calculate(a,b);
	b1.calculate(a,b,c);
	b1.calculate(a,b,c,d);
	b1.calculate(a,b,c,d,e);
	return 0;
}
