#include<iostream>
#include<fstream>
//#include<stdexcept>
using namespace std;

// 6. Define a class FileManager with a method to read data from a file.
// Implement exception handling to deal with file opening errors.
// Create an object of the FileManager class and demonstrate reading data from a file, handling exceptions.

class FileManager
{
    string data;
    public :

    void readFileData()
    {

        ofstream fout;
        fout.open("demo.txt");
        getline(cin,data);
        fout << "Fout use in coding" << endl;

        ifstream fin;
        fin.open("demo1.txt");

        try
        {
            if(fin)
            {
                while(getline(fin,data))
                {
                    cout << data << endl;
                }
            }
            else
            {
                throw runtime_error("file not opened !");
            }
        }catch(runtime_error error)
        {
            cout << error.what() << endl;
        }
        catch(...)
        {
            cout << "default exception !!" << endl;
        }

    }
};
int main()
{
    FileManager fm;
    fm.readFileData();
    return 0;
}
