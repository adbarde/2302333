#include<iostream>
using namespace std;
//area of circle
double area(double radius)
{
    const double PI=3.14159;
    return PI*radius*radius;
}

//area of rectangle
float area(float length,float breadth)
{
    return length*breadth;
}

//area of square
float area(float side)
{
    return side*side;
}
//area of triangle
double area(double height,double base)
{
    return 0.5*height*base;
}

int main()
{
    
    cout<<"Area of circle: "<<area(1.5)<<endl;
    cout<<"Area of rectangle: "<<area(4.5,3)<<endl;
    cout<<"Area of square: "<<area(2.5)<<endl;
    cout<<"Area of triangle: "<<area(3.3,5.5)<<endl;
    
    return 0;
}