#include<iostream>
using namespace std;

class Dec
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
		bool operator==(Dec &m2)
		{
			if(this->a==m2.a)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	Dec m1,m2,m3;
	m1.setter("M1");
	m2.setter("M2");
	if(m1==m2)
	{
		cout << "Those Are Same";
	}
	else
	{
		cout << "Those Are Not Same";
	}
	return 0;
}
