#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout<<"enter a number:\n";
    cin>>num;

    int a=num;
    for(num;num>1;num--)
    {
        fact=fact*num;
        
    }
    cout<<"factorial of "<<a<<" is = "<<fact;
    return 0;
}