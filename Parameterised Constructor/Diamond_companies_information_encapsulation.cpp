#include<iostream>
#include<string.h>
using namespace std;

class _Diamond
{
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo;
	public :
		_Diamond(int comp_id,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_name,string comp_ceo)
		{
			this->comp_id=comp_id;
			this->comp_name=comp_name;
			this->comp_staff_quantity=comp_staff_quantity;
			this->comp_revenue=comp_revenue;
			this->comp_import_raw_diamonds=comp_import_raw_diamonds;
			this->comp_export_diamonds=comp_export_diamonds;
			this->comp_ceo=comp_ceo;
		}
		void _Output(int i)
		{
			cout << endl << "Diamond companies information { "<< i+1 <<" }" << endl;
			cout << "Id : " << comp_id <<
			endl << "Companie Name : " << comp_name << 
			endl << "Companie Staff Quantity : " << comp_staff_quantity << 
			endl << "Companie Yearly Revenue : " << comp_revenue <<
			endl << "Companie Yearly Import Raw Diamonds : " << comp_import_raw_diamonds <<
			endl << "Companie Yearly Diamonds Export : " <<comp_export_diamonds <<
			endl << "Companie CEO : " << comp_ceo << endl;
		}
};
int size()
{
	int n;
	cout <<"Enter The Size Of Class Para : ";
	cin>>n;
	return n;
}
int input()
{
	int n=size(),i=0;
	int comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds;
	string comp_name,comp_ceo;
		_Diamond d[n] = _Diamond(comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_name,comp_ceo);
	int o=n;
	n--;
st:
	cout<< endl << "Diamond companies information { "<< i+1 <<" }" << endl;
	cout << "Enter Companie Id : ";
	cin>>comp_id;
		cin.ignore();
	cout << "Enter Companie Name : ";
	getline(cin,comp_name);
	cout << "Enter Companie Staff Quantity : ";
	cin>>comp_staff_quantity;
	cout << "Enter Companie Revenue (per year) : ";
	cin>>comp_revenue;
	cout << "(no. of raw diamonds imported per year)" << endl << "Enter Companie Import Raw Diamonds : ";
	cin>>comp_import_raw_diamonds;
	cout << "(no. of diamonds per year)" << endl << "Enter Companie Export Diamonds : ";
	cin>>comp_export_diamonds;
		cin.ignore();
	cout << "Enter Companie CEO Name : ";
	getline(cin,comp_ceo);
	d[i]=_Diamond(comp_id,comp_staff_quantity,comp_revenue,comp_import_raw_diamonds,comp_export_diamonds,comp_name,comp_ceo);
	if(i!=n)
	{
		i++;
		goto st;
	}
	for(i=0; i<o; i++)
	{
		d[i]._Output(i);
	}
	return 0;
}
int main()
{
	bool b=false;
	input();
	return b;
}
//Q.1 Write a Program to get and display N numbers of Diamond companies information using encapsulation and use of Parameterised Constructor by including below
//mentioned attributes:
//- comp_id
//- comp_name
//- comp_staff_quantity
//- comp_revenue (per year)
//- comp_import_raw_diamonds (no. of raw diamonds imported per year)
//- comp_export_diamonds (no. of diamonds per year)
//- comp_ceo (name of CEO of the company)
