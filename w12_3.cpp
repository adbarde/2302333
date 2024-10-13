#include<iostream>
using namespace std;
class First{
    public:
    int x;
    void print(int x1)
    {
        x=x1;
        cout<<"x = "<<x<<endl;
    }
};
class Second: public First{
    public:
    int y;
    void print(int y1)
    {
        y=y1;
        cout<<"y = "<<y<<endl;
    }
};
int main(void)
{
    First *ptr;
    Second obj;
    ptr = &obj;  
    ptr->print(10);  
}
