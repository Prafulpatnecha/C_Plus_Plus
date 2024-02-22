#include<iostream>
using namespace std;
#include<string.h>


class Railway
{
	int number,time,i,c=0,o,h,m;
	string name,destination,source,set;
	static string Name[3];
	static string Tha[3];
	static int Number[3];
	public : 
		Railway(int i)
		{
			this->i=i;
		}
		void Inputway()
		{
			int ck=1;
			cout << "(Only Those Number Are Use 55723,11223,22331)" << endl;
		star:
			cout << "Enter Train Number :";
			cin>>number;
			for(int d=0; d<=3; d++)
			{
				if(Number[d]==number)
				{
					c=1;
					o=d;
				}
			}
			if(ck==c)
			{
				cout << "Train Number Is Perfact\n" ;
			}
			else
			{
				cout << "Dose not Work Enter Only-->(55723,11223,22331) Train Numbers" << endl;
				goto star;
			}
			c=0;
				cin.ignore();
			cout <<"(" "Enter This Only Characters : " << Name[o] << ")" << endl << "Train Name : ";
			getline(cin,name);
			if(Name[o]==name)
			{
				cout << "Perfact Your Train Now Continue" << endl;
			}
			else
			{
				cout << "Dose not Work Enter Only Define Characters" << endl ;
				goto star;
			}
			cout << "Enter Your Source : " ;
			getline(cin,source);
			cout << "Enter Your Destination : " ;
			getline(cin,destination);
			No:
			cout << "Only Enter Number Of Time {1=05:00 AM},{2=09:30 AM},{3=12:30 PM},{4=05:10 PM},{5=10:40 PM}" << endl;
			cout << "Enter Your Train Time : " ;
			cin >> time;
			if(time==1)
			{
				h=05;m=00;set="AM";
//				{1=05:00 AM},
				cout << "Time Is Perfact" << endl;
			}
			else if(time==2)
			{
				h=9;m=30;set="AM";
				cout << "Time Is Perfact" << endl;
//				{2=09:30 AM}
			}
			else if(time==3)
			{
				h=12;m=30;set="PM";
				cout << "Time Is Perfact" << endl;
//				{3=12:30 PM}
			}
			else if(time==4)
			{
				h=05;m=10;set="PM";
				cout << "Time Is Perfact" << endl;
//				{4=05:10 PM}
			}
			else if(time==5)
			{
				h=10;m=40;set="PM";
				cout << "Time Is Perfact" << endl;
//				{5=10:40 PM}
			}
			else
			{
				goto No;
			}
		}
		void Outputway()
		{
			cout << endl << "Railway Reservation System ["<<1+i<<"]" << endl << "Train Number : " << Number[o] << endl <<
			"Train Name : " << Name[o] << endl << "Source : " << source << endl << "Destination : " << destination << endl
			<< "Train Time : " << h <<  ":" << m << set << endl;
		}
		~Railway()
		{
			int n[3]={2,2,2};
			if(i!=n[i])
			{
				cout << Tha[i];
			}
		}
};

string Railway::Name[3]={"Vande Bharat","Rajdhani Express","Tejas Express"};//={"SS","AA","EE"};
string Railway::Tha[3]={"===============================================================================================\n"};
int Railway::Number[3]={55723,11223,22331};

int main()
{
	int i=0,n=3,s;
	int number,time;
		Railway r[n]=Railway(i);
		
	st:	
		r[i]=Railway(i);
		i++;
	if(i!=n)
	{
		goto st;
	}
	for(i=0; i<n; i++)
	{
		r[i].Inputway();
	}
	for(i=0; i<n; i++)
	{
		r[i].Outputway();
	}
	return 0;
}

//Q.1 Write a Program to make a Railway Reservation System.
//Requirements:
//(A) User Input: 
//- Train Number
//- Train Name
//- Source
//- Destination
//- Train Time
//(B) Display Records: 
//- All Records
//- By Searching Train Number
//(C) Minimum 3 Input Train Records
