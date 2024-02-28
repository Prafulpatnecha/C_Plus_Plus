#include<iostream>
using namespace std;

//Create a class representing a `Movie` with attributes like `title`, `genre`, and `releasedYear`. 
//Demonstrate the instantiation of objects using array and accessing their attributes.
class Movie
{
	protected:
	string genre,title;//genre ex-horror,drama
	int releaseYear;
	public:
	void setter()
	{
		cout << "Enter Movie Title : ";
		cin >> title;
		cout << "Enter Movie Genre : ";
		cin >> genre;
		cout << "Enter Movie Release Year : ";
		cin >> releaseYear;
		cout << endl;
		cin.ignore();
	}
	void getter()
	{
		cout << "------------------------------------------------------------------------" << endl << "Movie Title : " << title << endl;
		cout << "Movie Genre : " << genre << endl;
		cout << "Movie Release Year : " << releaseYear << endl << endl;
	}
};

int main()
{
	int i,n;
	cout << "Enter The Value Of N : ";
	cin >> n;
	Movie m[n];
	for(i=0; i<n; i++)
	{
		m[i].setter();
	}
	for(i=0; i<n; i++)
	{
		m[i].getter();
	}
	return 0;
}
