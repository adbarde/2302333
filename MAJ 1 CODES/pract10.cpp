#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"enter your favourite number:";
    cin>>c;
    
    switch (c)
    {
    case 1:
        cout<<"ONE";
        break;
    
    case 2:
        cout<<"TWO";
        break;

    case 3:
        cout<<"THREE";
        break;

    case 4:
        cout<<"FOUR";
        break;

    case 5:
        cout<<"FIVE";
        break;
    case 6:
        cout<<"SIX";
        break;
    
    case 7:
        cout<<"SEVEN";
        break;

    case 8:
        cout<<"EIGHT";
        break;

    case 9:
        cout<<"NINE";
        break;

    default:
        cout<<"your number is OUT OF RANGE";
        break;
    }
    return 0;
}