#include<iostream>
using namespace std;
int main()
{
    int a,b,temp=0; 
    cout<<"enter a and b:\n";
    cin>>a>>b;

    temp=a;
    a=b;
    b=temp;

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;

    return 0;
}