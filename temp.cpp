#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<"enter a and b";
    cin>>a>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"a= "<<a<<"\n";
    cout<<"b= "<<b<<"\n";
    return 0;
}