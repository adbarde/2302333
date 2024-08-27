#include<iostream>
using namespace std;

float egrectarea(float length,float breadth=1.1)
{
    return length*breadth;
 }
int main()
{
    float length,breadth;

    cout<<"Area of rectangle with default breadth: "<<egrectarea(length=1.5)<<endl;
    cout<<"Area of rectangle without default breadth: "<<egrectarea(length=1.5,breadth=10);
    
    return 0;
}