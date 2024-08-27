#include<iostream>
using namespace std;
int main()
{
    float feh,celcius=0;
    cout<<"enter the temprature in Fahrenheit:\n";
    cin>>feh;

    celcius=(5.0/9.0)*(feh-32.0);

    cout<<"the temprature in celcius = "<<celcius;

    return 0;
}