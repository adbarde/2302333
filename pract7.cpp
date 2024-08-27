#include<iostream>
using namespace std;
int main()
{
   int c;
cout<<"enter a number:\n";
cin>>c;

switch (c)
{
case 1:
    cout<<"Your Favourite number is "<<c;
    break;

case 2:
    cout<<"Your Favourite number is "<<c;
    break;

case 3:
    cout<<"Your Favourite number is "<<c;
    break;

case 4:
    cout<<"Your Favourite number is "<<c;
    break;

case 5:
    cout<<"Your Favourite number is "<<c;
    break;
default:
    cout<<" number entered is out of range 1-5";
    break;
}
return 0;
}