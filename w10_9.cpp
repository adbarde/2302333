#include<iostream>
using namespace std;
class Figure{
    virtual void area()=0;
};

class Circle: public Figure{
    private:
    float radius;
    public:
    Circle(float r)
    {
        radius=r;
    }
    void area() override
    {
        cout<<"Area of Circle = "<<(3.14159*radius*radius)<<endl;
    }
};
class Rectangle:public Figure{
    private:
    float length,breadth;
    public:
    Rectangle(float l,float b)
    {
        length=l;
        breadth=b;
    }
    void area() override
    {
        cout<<"Area of Rectangle = "<<(length*breadth)<<endl;
    }
};
int main(void){
    Circle circle1(3.5);
    Rectangle rectangle1(20,5.5);
    circle1.area();
    rectangle1.area();

}