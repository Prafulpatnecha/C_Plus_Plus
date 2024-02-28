#include<iostream>
using namespace std;

class BankAccount
{
	int balance;
	public:
		void Setting()
		{
			cout << "Enter Your Balance : ";
			cin >> balance;
		}
		void getting()
		{
			cout << "Your Balance : " << balance;
		}
		BankAccount operator+(BankAccount &b2)
		{
			BankAccount box;
			box.balance=this->balance+b2.balance;
			return box;
		}
};

int main()
{
	BankAccount b1,b2,b3;
	cout << "b1 Bank" << endl;
	b1.Setting();
	cout << endl << "b2 Bank" << endl;
	b2.Setting();
	b3=b1+b2;
	b3.getting();
	return 0;
}
//5. Overload the `+` operator for the `BankAccount` class to display account details. Create two 
//`BankAccount` objects and demonstrate the use of the overloaded `+` operator to display total amount 
//of both accounts.
