#include<iostream>
using namespace std;

class MathOperations
{
	int a,b,total;
	public:
		void division()
		{
			cout << "Enter The Value A : ";
			cin >> a;
			cout << "Enter The Value B : ";
			cin >> b;
		}
		void getting()
		{
			try
			{
				if(b==0)
				{
					throw total;
				}
				else
				{
					total=a/b;
					cout << "Division : " << total;
				}
			}
			catch(int no)
			{
				cout << "Does Not Enter B Value 0 Do Not Diviede Create Error!!";
			}
		}
};

int main()
{
	MathOperations m1;
	m1.division();
	m1.getting();
	return 0;
}
//6. Define a class `MathOperations` with a method that performs a division operation. 
//Implement exception handling to handle invalid inputs. Create an object of the `MathOperations`
//class and demonstrate exception handling for invalid inputs.
