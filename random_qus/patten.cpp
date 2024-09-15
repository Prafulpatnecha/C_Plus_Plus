#include<iostream>
using namespace std;

int main()
{
	int s=10;
	int k=-1;
	for(int i=0 ; i <9; i++)//row
	{
		if(i<5)
		{
			s--;
			k++;
		}
		else{
			s++;
			k--;
		}
		for(int j=0; j< 10;j++)//column
		{
			if(i<=9 && j<=k || i>=0 && j>=s)
			{
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
	//C
//R	//*        *
	//**      **
	//***    ***
	//****  ****
	//**********
	//****  ****
	//***    ***
	//**      **
	//*        *
