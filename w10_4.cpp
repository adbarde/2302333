#include<iostream>
using namespace std;
class Parent1{
    public:
    void display1()
    {
        cout<<"This is Parent1"<<endl;
    }
};
class Parent2{
    public:
    void display2()
    {
        cout<<"This is Parent2"<<endl;
    }
};
class Child : public Parent1, public Parent2{
    public:
    void show()
    {
        cout<<"This is child"<<endl;
    }
};
int main()
{
    Child c;
    c.display1();
    c.display2();
    c.show();
    return 0;

}
