#include<iostream>
using namespace std;
int main()
{
    int sum=0, avg=0, num1, num2;

    cout<<"enter num 1 and num 2:\n";
    cin>>num1>>num2;

    sum=num1+num2;
    avg=(sum/2);

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;

    return 0;
}