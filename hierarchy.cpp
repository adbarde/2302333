#include<iostream>
using namespace std;
class Parent{
    public:
    int x;
    void display()
    {
        cout<<"Parent class\n";
    }
};
class Child1 : public Parent{
    public:
    int y;
    void display1(){
        cout<<"Child 1\n";
    }
};
class Child2 : public Parent{
    public:
    int z;
    void display2()
    {
        cout<<"Child 2\n";
    }
};
int main()
{
    Child1 ch1;
    Child2 ch2;
    ch1.display();
    ch1.display1();
    ch2.display();
    ch2.display2();
    return 0;
}
