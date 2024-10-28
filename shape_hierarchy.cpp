#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area()
    {
        cout<<"Finding area\n";
    }
};
class Circle: public Shape{
    public:
    void area() override
    {
        int ar=0,r=10;
        ar=(3.14159*r*r);
        cout<<"area circle = "<<ar<<endl;
    }
};
class Rectangle: public Shape{
    public:
    void area() override
    {
        int ara=0,l=10,b=20;
        ara=l*b;
        cout<<"area of rectangle = "<<ara<<endl;
    }
};
int main(void)
{
    Shape* ptr=new Circle;
    ptr->area();
    Shape* ptr2=new Rectangle;
    ptr2->area();
}