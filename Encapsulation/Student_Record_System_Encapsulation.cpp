#include<iostream>
#include<string.h>
using namespace std;

class _Student
{
	int stu_id,stu_age;
	string stu_name,stu_course,stu_city,stu_email,stu_college;
	public :
		void _userInput(int i)
		{ 
			cout << "Studant Record [" << i+1 << "]" << endl;
			cout << "Enter Studant Id : ";
			cin >> stu_id;
			cout << "Enter Studant Age : ";
			cin >> stu_age;
				cin.ignore();
			cout << "Enter Studant Name : ";
			getline(cin,stu_name);
			cout << "Enter Studant Course : ";
			getline(cin,stu_course);
			cout << "Enter Studant City : ";
			getline(cin,stu_city);
			cout << "Enter Studant Email : ";
			getline(cin,stu_email);
			cout << "Enter Studant College : ";
			getline(cin,stu_college);
		}
		void _recordOutput(int i)
		{
			cout << endl << "Studant Record [" << i+1 << "]" << endl << "Studant Id : " << stu_id << endl << "Studant Name : " << stu_name << endl << "Studant Age : " << stu_age << endl << "Studant Course : " << stu_course << endl << "Studant City : " << stu_city << endl << "Studant Email : " << stu_email << endl << "Studant College : " << stu_college << endl;
		}
};

int size()
{
	int n;
	cout << "Enter The Value Of Size Class : ";
	cin >> n;
	return n;
}

int main()
{
	bool b = false;
	int n=size();
	_Student s[n];
	int i;
	for(i=0; i<n; i++)
	{
		s[i]._userInput(i);
	}
	for(i=0; i<n; i++)
	{
		s[i]._recordOutput(i);
	}
	return b;
}
//Q.1 Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_email
//- stu_college