#include<iostream>
#include<string.h>
using namespace std;
class RBI
{
	protected:
	float sbi,bob,icici;
		void setSBI()
		{
			cout << "SBI Rate Of Interest : " << sbi << endl;
		}
		void setBOB()
		{
			cout << "BOB Rate Of Interest : " << bob << endl;
		}
		void setICICI()
		{
			cout << "ICICI Rate Of Interest : " << icici << endl;
		}
};
class SBI : public RBI
{
	public:
	void getROI()
	{
		cout << "Enter SBI Rate Of Interest : ";
		cin >> sbi;
		setSBI();
	}
};
class BOB: public RBI
{
	public:
	void getROI()
	{
		cout << "Enter BOB Rate Of Interest : ";
		cin >> bob;
		setBOB();
	}
};
class ICICI: public RBI
{
	public:
	void getROI()
	{
		cout << "Enter ICICI Rate Of Interest : ";
		cin >> icici;
		setICICI();
	}
};
int main()
{
	SBI s;
	ICICI ic;
	BOB b;
	s.getROI();
	ic.getROI();
	b.getROI();
	return 0;
}
//Q.1 Write a Program to print the rate of interest of different banks using hierarchical inheritance:
//- Class RBI -> Class SBI
//- Class RBI -> Class BOB
//- Class RBI -> Class ICICI
//- inherit rate attribute and getROI() method in all child
//classes
