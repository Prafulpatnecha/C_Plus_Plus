#include<iostream>
using namespace std;

int main()
{
	string a;
	cout << "Enter any word : ";
	getline(cin,a);
	string b="";
	int k=a.length();
	for(int i = a.length() ; i>=0; i--)
	{
		if(a[i]==32)
		{
			for(int j=i; j<k; j++)
			{
//				cout << "ok";
				b = b + a[j];
			}
			k=i--;
		}
	}
	b=b+" ";
	for(int i = 0 ; i< a.length();i++)
	{
		b= b+a[i];
		if(a[i]==32)
		{
			i=a.length();
		}
	}
	cout << b;
	return 0;
}


//Given an input string reverse the order of the words.

//Example 1:
//
//Input: "the sky is blue"
//Output: "blue is sky the"
//Example 2:
//
//Input: "hello world"
//Output: "world hello"

//Example 3:
//
//Input: "a good example"
//Output: "example good a"
