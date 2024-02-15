#include<iostream>
using namespace std;

class Max
{
	protected:
	int a;
	public:
		void setter(string find)
		{
			cout << "Enter The Value Of "<< find <<": ";
			cin >> this->a;
		}
		void getter()
		{
			cout << "M1 Is "<<a<<"++";
		}
		Max operator++(int)
		{
			Max box;
			int n=++this->a;
			box.a=n;
			return box;
		}
};

int main()
{
	Max m1,m2;
	m1.setter("m1");
	m2= m1++;//m1.operator++(int)
	m2.getter();
	return 0;
}
