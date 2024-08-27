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
        cout<<"your favourite number is ONE!";
        break;
    
    case 2:
        cout<<"your favourite number is TWO!";
        break;

    case 3:
        cout<<"your favourite number is THREE!";
        break;

    case 4:
        cout<<"your favourite number is FOUR!";
        break;

    case 5:
        cout<<"your favourite number is FIVE!";
        break;
    default:
        cout<<"your favourite number is OUT OF RANGE 1-5";
        break;
    }
    return 0;
}