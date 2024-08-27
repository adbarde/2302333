#include<iostream>
using namespace std;
int main()
{
    int lar=0,a,b;
    cout<<"enter 2 numbers a and b:\n";
    cin>>a>>b;

    if(a>b)
    {
        lar=a;
    }
    else
    lar=b;

    cout<<"The largest of two = "<<lar;
    return 0;
}