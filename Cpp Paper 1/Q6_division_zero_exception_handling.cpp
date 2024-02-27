#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	public :
		void division()
		{
			cout << "Enter The Value A : ";
			cin >> a;
			cout << "Enter The Value B : ";
			cin >> b;
		}
		void getter()
		{
			try
			{
				if(b==0)
				{
					throw b;
				}
				else
				{
					cout << "Division : " << a/b;
				}
			}
			catch(int i)
			{
				cout << "Does Not Enter Zero B Error!!";
			}
		}
};
int main()
{
	Calculator cal;
	cal.division();
	cal.getter();
	return 0;
}

//6. Define a class `Calculator` with a method that performs division. Implement exception handling 
//to handle the case of division by zero. Create an object of the `Calculator` class and demonstrate 
//exception handling for division by zero.
