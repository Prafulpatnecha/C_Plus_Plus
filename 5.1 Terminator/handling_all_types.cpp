#include<iostream>
using namespace std;

class Illustrates
{
	string pass1;
	static string pass;
	public:
		void set_get()
		{
			st:
			cout << "Enter This Password Then File Open 'Admin012' " << endl;
			cout << "Enter Your Password : ";
			cin >> pass1;
			try
			{
				if(pass==pass1)
				{
					cout << "Your File Is Open" << endl;
				}
				else
				{
					throw pass;
				}
			}
			catch(string pas)
			{
				cout << "Your Pass Is Not Perfact";
			}
		}
};
string Illustrates::pass="Admin012";
int main()
{
	Illustrates i1;
	i1.set_get();
	return 0;
}
//	Q.1 Write a Program to create a class that illustrates the concept of handling 
//	all types of exceptions using general exceptions.
