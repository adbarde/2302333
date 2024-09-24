#include<iostream>
using namespace std;
class Base1{
    public:
    int real,image;
    Base1(int r, int i)
    {
        real=r;
        image=i;
    }
    Base1 operator +(const Base1 &obj)
    {
        return Base1(real+obj.real,image+obj.image);
    }
};
int main()
{
    Base1 obj1(5,2),obj2(3,2);
    Base1 obj3=obj1 + obj2;
    cout<<"Complex no = "<<obj3.real<<" + i"<<obj3.image<<endl;
    return 0;
}