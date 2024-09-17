//feedback link: https://docs.google.com/forms/d/1bDhwhyQeFNOimXPTucxau_ukKXZRNke9VdIrxxW3_ek/edit?usp=drivesdk
//programs link: https://tinyurl.com/cpplabs2024

#include<iostream>
using namespace std;
int main()
{
    int sum=0,average=0,number1,number2;

    cout<<"enter number1 and number 2";
    cin>>number1>>number2;

    sum=number1+number2;
    average=(sum/2);
    
    cout<<"sum= "<<sum<<"\n";
    cout<<"average= "<<average<<"\n";
    return 0;
}