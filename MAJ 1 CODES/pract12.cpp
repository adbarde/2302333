#include<iostream>
using namespace std;

void swaping(int a,int b)
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

    swaping(a,b);
    cout<<"In the main"<<" a = "<<a<<"\t"<<"b = "<<b<<endl;
    return 0;
}