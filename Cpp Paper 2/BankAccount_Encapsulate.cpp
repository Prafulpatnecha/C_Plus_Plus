#include<iostream>
using namespace std;

class BankAccount
{
	long long accountNumber,acnumberck;
	int balance,Usercredit,Userdebit;
	string ownerName="Admin";
	void credit()
	{
		no:
		cout << "Enter The Value Of Credit : ";
		cin >> Usercredit;
		cout << "Enter Account Number : ";
		cin >> acnumberck;
		if(accountNumber==acnumberck)
		{
			balance+=Usercredit;
		 	cout << "credit Balance Is : " << Usercredit <<endl;
		 	cout << "Total Balance Is : " << balance;
		}
		else
		{
			cout << "Does Not Parfact Account Number" << endl;
			goto no;
		} 
	}
	void debit()
	{
		go:
		cout << "Enter The Value Of Debit : ";
		cin >> Userdebit;
		cout << "Enter Account Number : ";
		cin >> acnumberck;
		if(accountNumber==acnumberck)
		{
			if(Userdebit<=balance)
			{
				balance-=Userdebit;
				cout << "credit Balance Is : " << Userdebit << endl;
		 		cout << "Total Balance Is : " << balance;
			}
			else
			{
				cout << "Your Accunt Balance Is : "<< balance << "!!" << endl;
				goto go;
			}
		}
		else
		{
			cout << "Does Not Parfact Account Number" << endl;
			goto go;
		}
	}
	public :
	void display()
	{
		int check;
		cout << "Enter Account Number : ";
		cin >> accountNumber;
		balance=1000;
		cout << "Name : " << ownerName << endl;
		cout << "Your Account Balance : " << balance << endl;
		st:
		cout << "Enter The 1->credit 0->debit check : ";
		cin >> check;
		if(check==1)
		{
			credit();
		}
		else if(check==0)
		{
			debit();
		}
		else
		{
			cout << "Please Enter 1 And 0" << endl;
			goto st;
		}
	}
};


int main()
{
	BankAccount bank;
	bank.display();
	return 0;
}
//2. Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and 
//`ownerName`. Encapsulate these attributes using appropriate access specifiers. Implement public 
//member functions to credit, debit, and display the balance. Demonstrate encapsulation by 
//interacting with the class through its member functions.
