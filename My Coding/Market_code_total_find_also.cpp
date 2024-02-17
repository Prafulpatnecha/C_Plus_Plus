#include<iostream>
using namespace std;
#include<string.h>

class UserMarket
{
	protected:
	string user,password,prodect;
	int ck,i,add,total;
	int Milk,Suger,Tata_Solt,Ge,Oil,Sugerpowder,Hing,Local_Solt,Taja_Tea,Cilli,Haldi_Powder,Haldi;
	int remove;
	static string Prodect[14];
	static string Exit[2];
	void Input()
	{
		total=0;
		ck=1;
		Milk=0;Suger=0;Tata_Solt=0;Ge=0;Oil=0;Sugerpowder=0;Hing=0;Local_Solt=0;Taja_Tea=0;Cilli=0;Haldi_Powder=0;Haldi=0;
		remove=0;
st:
	cout << "All Select Now Enter Only This Key --> [All]" << endl;
	cout << endl << "Now Continue To Enter Only -->[Con] "<< endl 
	<< endl << "$33 --> Milk : "<< Milk <<endl  << ",$40 --> Suger : "<< Suger <<endl
	<<",$18 --> Tata Solt : "<< Tata_Solt <<endl <<",$500 --> Ge : "<< Ge << endl<<
	",$200 --> Oil : "<<Oil << endl <<",$50 --> Sugerpowder : "<< Sugerpowder <<endl
	<<",$250 --> Hing : "<< Hing << endl <<"$10 --> Local Solt : "<<Local_Solt<< endl <<
	",$100 --> Taja_Tea : "<<Taja_Tea << endl<<",$200 --> Cilli : "<< Cilli <<endl
	<<",$300 --> Haldi Powder : "<<Haldi_Powder << endl <<",$200 --> Haldi : " 
	<< Haldi << endl;
	
	cout << "Enter Item Remove Name : ";
	cout <<"{R<--Remove Item}" << endl ;
		cout << "Enter Item Name : ";
		getline(cin,prodect);
		if(prodect==Prodect[0])//select all items -->All
		{
		Milk++,Suger++,Tata_Solt++,Ge++,Oil++,Sugerpowder++,Hing++,Local_Solt++,Taja_Tea++,Cilli++,Haldi_Powder++,Haldi++;
			remove+=12;
			total=total+33+40+18+500+200+50+250+10+100+200+300+200;
			cout << "Purchases Contite 12 And Total " << remove << endl;
		goto st;
		}
		else if(prodect==Prodect[1])
		{
			Milk++;
			remove++;
			total=total+33;
			cout << "Milk Is Purchases Contite " << Milk << endl;
			goto st;
		}
		else if(prodect==Prodect[2])
		{
			Suger++;
			remove++;
			total=total+40;
			cout << "Suger Is Purchases Contite " << Suger << endl;
			goto st;
		}
		else if(prodect==Prodect[3])
		{
			Tata_Solt++;
			remove++;
			total=total+18;
			cout << "Tata Solt Is Purchases Contite " << Tata_Solt << endl;
			goto st;
		}
		else if(prodect==Prodect[4])
		{
			Ge++;
			remove++;
			total=total+500;
			cout << "Ge Is Purchases Contite " << Ge << endl;
			goto st;
		}
		else if(prodect==Prodect[5])
		{
			Oil++;
			remove++;
			total=total+200;
			cout << "Oil Is Purchases Contite " << Oil << endl;
			goto st;
		}
		else if(prodect==Prodect[6])
		{
			Sugerpowder++;
			remove++;
			total=total+50;
			cout << "Sugerpowder Is Purchases Contite " << Sugerpowder << endl;
			goto st;
		}
		else if(prodect==Prodect[7])
		{
			Hing++;
			remove++;
			total=total+250;
			cout << "Hing Is Purchases Contite " << Hing << endl;
			goto st;
		}
		else if(prodect==Prodect[8])
		{
			Local_Solt++;
			remove++;
			total=total+10;
			cout << "Local Solt Is Purchases Contite " << Local_Solt << endl;
			goto st;
		}
		else if(prodect==Prodect[9])
		{
			Taja_Tea++;
			remove++;
			total=total+100;
			cout << "Taja Tea Is Purchases Contite " << Taja_Tea << endl;
			goto st;
		}
		else if(prodect==Prodect[10])
		{
			Cilli++;
			remove++;
			total=total+200;
			cout << "Cilli Is Purchases Contite " << Cilli << endl;
			goto st;
		}
		else if(prodect==Prodect[11])
		{
			Haldi_Powder++;
			remove++;
			total=total+300;
			cout << "Haldi Powder Is Purchases Contite " << Haldi_Powder << endl;
			goto st;
		}
		else if(prodect==Prodect[12])
		{
			Haldi++;
			remove++;
			total=total+200;
			cout << "Haldi Is Purchases Contite " << Haldi << endl;
			goto st;
		}
		else if(prodect==Prodect[13])//remove Items --> R
		{
			rmove:
			cout << "Total Item Purchase Is : " << remove << endl;
			if(remove>=1)
			{
				cout << "Now Exit To Enter Only " << endl << "Milk : "<< Milk <<",Suger : "<< Suger <<",Tata Solt : "<< Tata_Solt <<",Ge : "<<Ge<<
				",Oil : "<<Oil <<",Sugerpowder : "<< Sugerpowder <<",Hing : "<< Hing << endl <<"Local Solt : "<<Local_Solt<<
				",Taja_Tea : "<<Taja_Tea<<",Cilli : "<< Cilli <<",Haldi Powder : "<<Haldi_Powder<<",Haldi" << Haldi << endl;
				cout << "Enter Item Remove Name : ";
				getline(cin,prodect);
					if(prodect==Prodect[1])
					{
						if(Milk>=1)
						{
							Milk--;
							remove--;
							total=total-33;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[2])
					{
						if(Suger>=1)
						{
							Suger--;
							remove--;
							total=total-40;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[3])
					{
						if(Tata_Solt>=1)
						{
							Tata_Solt--;
							remove--;
							total=total-18;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[4])
					{
						if(Ge>=1)
						{
							Ge--;
							remove--;
							total=total-500;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[5])
					{
						if(Oil>=1)
						{
							Oil--;
							remove--;
							total=total-200;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[6])
					{
						if(Sugerpowder>=1)
						{
							Sugerpowder--;
							remove--;
							total=total-50;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[7])
					{
						if(Hing>=1)
						{
							Hing--;
							remove--;
							total=total-250;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[8])
					{
						if(Local_Solt>=1)
						{
							Local_Solt--;
							remove--;
							total=total-10;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[9])
					{
						if(Taja_Tea>=1)
						{
							Taja_Tea--;
							remove--;
							total=total-100;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					} 
					else if(prodect==Prodect[10])
					{
						if(Cilli>=1)
						{
							Cilli--;
							remove--;
							total=total-200;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[11])
					{
						if(Haldi_Powder>=1)
						{
							Haldi_Powder--;
							remove--;
							total=total-300;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Prodect[12])
					{	
						if(Haldi>=1)
						{
							Haldi--;
							remove--;
							total=total-200;
							goto rmove;
						}
						else
						{
							cout << "!!!This Item Is Already Zero Purchases!!!" << endl ;
							goto rmove;
						}
					}
					else if(prodect==Exit[0])
					{
						cout << "You Exit It" << endl;
						goto st;
					}
					else
					{
						cout << "!!!Pleace Enter Only Display Product Now You Purchases!!!" << endl;
						goto rmove;
					}
			}
			else
			{
				cout << "!!Pleace You Select A Product Any!!" << endl;
				goto st;
			}
		}
		else if(prodect==Exit[1])
		{
			if(remove>=1)
			{
				cout << "Thanks To You Purchases";
			}
			else
			{
				cout << "!!Pleace Any One Product Now Purchases!!" << endl;
				goto st;
			}
		}
		else
		{
			cout << "!!Dose Not Work Input Pleace Right A Display Items!!" << endl;
			goto st;
		}
	}
};
class Purchase:virtual public UserMarket
{
	public:
	void totalAmount()
	{
		UserMarket::Input();
		cout << endl << "Now Continue To Enter Only -->[Con] "<< endl 
	<< endl << "$33 --> Milk : "<< Milk <<endl  << ",$40 --> Suger : "<< Suger <<endl
	<<",$18 --> Tata Solt : "<< Tata_Solt <<endl <<",$500 --> Ge : "<< Ge << endl<<
	",$200 --> Oil : "<<Oil << endl <<",$50 --> Sugerpowder : "<< Sugerpowder <<endl
	<<",$250 --> Hing : "<< Hing << endl <<"$10 --> Local Solt : "<<Local_Solt<< endl <<
	",$100 --> Taja_Tea : "<<Taja_Tea << endl<<",$200 --> Cilli : "<< Cilli <<endl
	<<",$300 --> Haldi Powder : "<<Haldi_Powder << endl <<",$200 --> Haldi : " 
	<< Haldi << endl;
		cout << "Your Totel Amount : " << total;
	}
};
string UserMarket::Prodect[14]={"All","Milk","Suger","Tata Solt","Ge","Oil","Sugerpowder","Hing","Local Solt","Taja Tea","Cilli","Haldi Powder","Haldi","R"};
string UserMarket::Exit[2]={"Exit","Con"};
int main()
{
	Purchase u1;
	u1.totalAmount();
	return 0;
}
