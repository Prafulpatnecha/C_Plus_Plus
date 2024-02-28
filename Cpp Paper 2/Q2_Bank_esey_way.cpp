#include<iostream>
using namespace std;

class BankAccount
{
	int accountNumber,balance,debitBalance,creditBalance;
	string ownerName;
		void credit()
		{
			int accountfind;
			cout << "Credit Amount Enter : ";
			cin >> creditBalance;
			cout << "Enter Your AccountNumber : ";
			cin >> accountfind;
			if(accountNumber==accountfind)
			{
				balance=creditBalance+balance;
				cout << "Total Balance :" << balance;
			}
			else
			{
				cout << "Enter Only Your Account Number!!";
			}
		}
		void debit()
		{
			int accountfind;
			cout << "Debit Amount Enter : ";
			cin >> debitBalance;
			cout << "Enter Your AccountNumber : ";
			cin >> accountfind;
			if(accountNumber==accountfind)
			{
				balance=balance-debitBalance;
				cout << "Total Balance :" << balance;
			}
			else
			{
				cout << "Enter Only Your Account Number!!";
			}
		}
	public:
		void display()
		{
			balance=500;
			ownerName="Owner Name : Admin";
			int i;
			cout << "Enter Your Account Number : ";
			cin >> accountNumber;
			cout << ownerName << endl;
			cout << "Bank Balance : " << balance << endl;
			cout << "Enter Debit Then 1 And Credit Then 0 : ";
			cin >> i;
			if(i==0)
			{
				credit();
			}
			else if(i==1)
			{
				debit();
			}
			else
			{
				cout << "Enter Only 0 And 1 Then Run Prosses!!";
			}
		}
};
int main()
{
	BankAccount b;
	b.display();
	return 0;
}
//Define a class named `BankAccount` with private attributes `accountNumber`, `balance`, and 
//`ownerName`. Encapsulate these attributes using appropriate access specifiers. Implement public 
//member functions to credit, debit, and display the balance. Demonstrate encapsulation by interacting 
//with the class through its member functions.
