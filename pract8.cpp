#include<iostream>
using namespace std;
int main()
{
       int c;
cout<<"enter a digit:\n";
cin>>c;

switch (c)
{
case 1:
    cout<<"one";
    break;

case 2:
    cout<<"two";
    break;

case 3:
   cout<<"three";
    break;

case 4:
    cout<<"four";
    break;

case 5:
    cout<<"five";
    break;

case 6:
    cout<<"six";
    break;

case 7:
    cout<<"seven";
    break;

case 8:
   cout<<"eight";
    break;

case 9:
    cout<<"nine";
    break;

case 0:
    cout<<"zero";
    break;
default:
    cout<<" number entered is out of range";
    break;
}

    return 0;
}