#include<iostream>
using namespace std;

main()
{
    int n;
    cout <<"Enter The Size Of Array : ";
    cin >> n;
    int a[n],i;
    for(i=0; i<n; i++)
    {
        cout << "Enter Array [" << i << "] : ";
        cin >> a[i];
    }
    cout << "Even : ";
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout << a[i] << ",";
        }
    }
}