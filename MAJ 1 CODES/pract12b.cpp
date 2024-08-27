#include<iostream>
using namespace std;

void swapingref(int &a,int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"In the function"<<" a = "<<a<<"\t"<<"b = "<<b<<endl;
 }
int main()
{
    int a,b;
    cout<<"enter two numbers:\n";
    cin>>a>>b;
    cout<<"Before swaping In the main"<<" a = "<<a<<"\t"<<"b = "<<b<<endl;
    swapingref(a,b);
    cout<<"After swaping In the main"<<" a = "<<a<<"\t"<<"b = "<<b<<endl;
    return 0;
}