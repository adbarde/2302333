#include<iostream>
using namespace std;
int main()
{
    int a,b,lar=0;
    cout<<"enter a and b:\n";
    cin>>a>>b;

    if(a>b)
    lar=a;
    else
    lar=b;
    cout<<"largest number is: "<<lar;
    
    return 0;
}