#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout << "Enter N : ";
	cin >> n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout << i << " ";
		}
		i++;
	}
	return 0;
}
