#include<iostream>
using namespace std;
void area(float radius)
{
    const float pi=3.14159;
    cout<<"area of circle = "<<(pi*radius*radius);
}
void area(int side)
{
    
    cout<<"area of square = "<<(side*side);
}
void area(int length, int breadth)
{
   
    cout<<"area of rectangle = "<<(length*breadth);
}
void area(float height, float base)
{
    
    cout<<"area of triangle = "<<((1.0/2.0)*base * height);
}
int main()
{
    int side,length,breadth;
    float height,base,radius;
    

    return 0;
}