#include<iostream>
using namespace std;
int main()
{
    float fah,celcius=0;
    cout<<"enter temprature in Fahrenheit:\n";
    cin>>fah;

    celcius=(fah-32.0)*(5.0/9.0);

    cout<<"Tempratur in Celcius = "<<celcius;
    return 0;
}