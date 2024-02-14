#include<iostream>
using namespace std;

class Max
{
	protected:
	int a,b;
	public:
		void setter(string find)
		{
			cout << "Enter The Value Of "<< find <<": ";
			cin >> this->a;
		}
		void getter()
		{
			cout << "M1 Is "<<a<<"++" << endl << "M2 Is "<<b<<"++";
		}
		Max operator+(Max &m2)
		{
			Max box;
			int n=this->a+1;
			int n1=m2.a+1;
			box.a=n;
			box.b=n1;
			return box;
		}
};

int main()
{
	Max m1,m2,m3;
	m1.setter("m1");
	m2.setter("m2");
	m3= m1+m2;//m1.operator+(m2)
	m3.getter();
	return 0;
}
