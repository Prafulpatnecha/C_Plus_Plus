#include<iostream>
using namespace std;
#include<string.h>

class Billing
{
	int number,quantity,price,discount;
	string item,user,user_ck,pass,pass_ck;
	public:
		void User()
		{
			cout << "Enter The User Name : ";
			getline(cin,user);
			cout << "Enter The Password : ";
			getline(cin,pass);
		}
		int UserInput()
		{
			cout << "Enter Item Number :";
			cin >> number;
				cin.ignore();
			cout << "Enter Items Name : ";
			getline(cin,item);
			cout << "Enter Quantity : ";
			cin >> quantity;
			cout << "Enter Price : ";
			cin >> price;
			cout << "Enter Discount : ";
			cin >> discount;
			return number;
		}
		void Output()
		{
			cout << "Login" << endl;
			st:
			cin.ignore();
			cout << "Enter Re-User Name And Continue Now :";
			getline(cin,user_ck);
			cout << "Enter Password : ";
			cin >> pass_ck;
			if(user==user_ck)
			{
				if(pass==pass_ck)
				{
					cout << "Your User Id And Pass Is Parfect" << endl;	
				}
				else
				{
					cout << "Please Try Again And Enter Valid User Password Name !!" << endl;
					goto st;
				}
			}
			else
			{
				cout << "Please Try Again And Enter Valid User Name !!" << endl;
				goto st;
			}
		}
		int perfact(int numbe[3])
		{
			int num=0,ck=0,i;
				str:
			cout << endl << "Exit Enter Only {-10}" << endl << "Select All Numbers Enter {-1}" << endl
			<< "Enter Item Number : ";
			cin >> num;
			if(num==-10)
			{
				ck=num;
			}
			else if(num==-1)
			{
				ck=num;
			}
			else
			{
				for(i=0; i<3 ; i++)
				{
					if(num==numbe[i])
					{
						ck=i;
						goto sto;
					}
				}
				cout << "Not Is Perfact Pleace Enter Perfact Id Number!!" << endl;
				goto str;
			}
			sto:
			return ck;
		}
		void system(int i)
		{
			cout << endl << "Item Number : " << number << endl;
			cout << "Item Name : " << item << endl
			<< "Quantity : " << quantity << endl
			<< "Price : " << price << endl
			<< "Discount : " << discount << endl << endl;
		}
};

int main()
{
	Billing bill[3];
	bill[0].User();
	int i,number[3];
	for(i=0; i<3; i++)
	{
		number[i]=bill[i].UserInput();
	}
	bill[0].Output();
	up:
	int n=bill[0].perfact(number);
	if(n!=-10 && n!=-1)
	{
		bill[n].system(n);
		goto up;
	}
	else if(n==-1)
	{
		for(i=0; i<3; i++)
		{
			bill[i].system(i);
		}
		goto up;
	}
	else
	{
		cout << "perfact And Thanks To Visit";
	}
	return 0;
}
//Q.2 Write a Program to make a Supermarket Billing System.
//Requirements:
//(A) User Input:
//- Item Number
//- Item Name
//- Quantity
//- Price
//- Discount
//(B) Verify User Id And Password
//(C) Display Records:
//- All Records
//- By Searching Item Number
