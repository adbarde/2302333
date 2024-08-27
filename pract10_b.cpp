#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout<<"enter a number:\n";
    cin>>num;

    int a=num;
    do
    {
        fact=fact*num;
         num--;
    } while (num>1);
   
    cout<<"factorial of "<<a<<" is = "<<fact;
    return 0;
}