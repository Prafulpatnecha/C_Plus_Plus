#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;

class FileManager
{
	string data;
	public :
		void readData()
		{
			ofstream fout;
			fout.open("demo.txt");
			cout << "Enter The Value : ";
			getline(cin,data);
			fout << data;
			fout.close();
			
			ifstream finput;
			finput.open("demo.txt");
			cout << "Read File : " << endl;
			try
			{
				if(finput)
				{
					while(getline(finput,data))
					{
						finput >> data;
						cout << data;
//						finput.close();
					}
				}
				else
				{
					throw runtime_error("File Not Avilable!!");
				}
			}
			catch(runtime_error error)
			{
				cout << error.what() <<endl;
			}
			catch(...)
			{
				cout << "Dose Not Support!!";
			}
		}
};
int main()
{
	FileManager file;
	file.readData();
	return 0;
}
//6.Define a class `FileManager` with a method to read data from a file. Implement 
//exception handling to deal with file opening errors. Create an object of the 
//`FileManager` class and demonstrate reading data from a file, handling exceptions.
