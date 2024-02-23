#include<iostream>
using namespace std;

int main() 
{
    int i,j,l,n=5,ck=0;
    for (i=1; i<=5; i++)
	{
        l = i;
        for (j = 1; j <= i; j++) 
		{
            if(j%2==0)
            {
		        cout << " " << l+n;
	            l = l + (5 - j);
            	ck+=2;
				if(l==18)
				{
					l-=3;
				}
			}
			else
			{
	            n--;
				cout << " " << l;
				if(l==12)
				{
					l+=3;
				}
				l =l+ (5 - j);
	     		if(l==13)
	          	{
	          		l=l+3;
				}
			}
			if(ck==n)
			{
				n--;
			}
        }
        cout << endl;
    }
    return 0;
}
