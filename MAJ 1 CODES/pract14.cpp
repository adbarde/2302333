#include<iostream>
using namespace std;

double circlearea(double radius,const double PI=3.14159)
{
    
    return PI*radius*radius;
 }
int main()
{
    double radius;

    cout<<"Area of circle with constant argument: "<<circlearea(radius=1.5)<<endl;
    
    return 0;
}