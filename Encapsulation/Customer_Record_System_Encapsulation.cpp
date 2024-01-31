#include<iostream>
#include<string.h>
using namespace std;
int size()
{
	int n;
	cout <<"Enter The Value Of Size Class : ";
	cin >> n;
	return n;
}

class _Customer
{
	int id,age,validity;
	long long mobileNo;
	string name,city,telecom;
	
	public :
		void recordInput(int i)
		{
			cout <<"Customer Record System "<< i+1 << endl;
			cout<<"Enter Customer Id : ";
			cin>>id;
				cin.ignore();
			cout<<"Enter Customer Name : ";
			getline(cin,name);
			cout<<"Enter Customer Age : ";
			cin>>age;
				cin.ignore();
			cout<<"Enter Customer City : ";
			getline(cin,city);
			cout<<"Enter Customer Mobile Number : ";
			cin>>mobileNo;
			cout<<"Enter Customer Simcard Validity (in years) : ";
			cin>>validity;
				cin.ignore();
			cout<<"Enter Customer Telecom Brand Name : ";
			getline(cin,telecom);
		}
		
		void recordOutput(int i)
		{
			cout << endl <<"Customer Record System "<< i+1 << endl << "Customer Id : " << id << endl <<
			"Customer Name : " << name << endl << "Customer Age : " << age << endl << "Customer City : " <<
			city << endl << "Customer Mobile Number : " << mobileNo << endl << "Customer Simcard Validity (in years) : " <<
			validity << endl <<"Customer telecom Brand Name : " << telecom << endl;
		}
};
//	cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name

int main()
{
	bool b;
	int n=size();
	_Customer s[n];
	int i;
	for(i=0; i<n; i++)
	{
		s[i].recordInput(i);
	}
	for(i=0; i<n; i++)
	{
		s[i].recordOutput(i);
	}
	return b;
}

//Q.2 Write a Program to create a Customer Record System for 5 customers using Encapsulation. Consider the below-mentioned attributes in the Customer structure:
//- cust_id
//- cust_name
//- cust_age
//- cust_city
//- cust_mobile_number
//- cust_simcard_validity (in years)
//- cust_telecom_brand_name (like Jio, Airtel, Vi, etc.)
