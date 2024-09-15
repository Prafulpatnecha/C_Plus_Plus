#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter The Value Array : ";
	cin >> n;
	
	int array[n];
	
	for(int i = 0 ; i< n; i++)
	{
		cout << "Enter The Value Array [" << i << "] : ";
		cin >> array[i];
	}
	for(int i = 0 ; i< n; i++)
	{
		int k=0;
		for(int j=0; j<n;j++)
		{
			if(array[i]==array[j])
			{
				k++;
			}
		}
		if(k<3)
		{
			cout << array[i] << "  ";
		}
	}
	return 0;
}


//Given an integer array nums where every element appears three times except for one.
 

// Example 1:

// Input: [2,2,3,2]
// Output: 3
// Example 2:

// Input: [0,1,0,99,0,1,99,1]
// Output: 99 , 99
