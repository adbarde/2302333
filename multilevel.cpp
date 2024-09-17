#include<iostream>
using namespace std;
class Grandparent{
    public:
    void display()
    {
        cout<<"This is Grandparent class"<<endl;
    }
};
class Parent : public Grandparent{
    public:
    void print()
    {
        cout<<"This is Parent class"<<endl;
    }
};
class Child : public Parent{
    public:
    void show()
    {
        cout<<"This is Child class"<<endl;
    }
};
int main()
{
    Child c;
    c.display();
    c.print();
    c.show();
    return 0;
}