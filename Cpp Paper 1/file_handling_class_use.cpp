#include<iostream>
using namespace std;

class Calculator
{
	FILE *fp;
	public :
		void division()
		{
			fp = fopen("NewFile.txt","w");
			fprintf(fp,"Akhil Sir");
		}
};
int main()
{
	Calculator cal;
	cal.division();
	return 0;
}
