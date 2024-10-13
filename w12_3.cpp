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
    void show(int y1)
    {
        y=y1;
        cout<<"y = "<<y<<endl;
    }
}; 
int main(void)
{
    Second *ptr;
    Second obj;
    ptr = &obj;  
    ptr->print(10);
    ptr->show(50);
}