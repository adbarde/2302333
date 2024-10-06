#include<iostream>
using namespace std;
class BaseA{
    public:
    void showA()
    {
        cout<<"Base class A\n";
    }

};
class DerivedB: virtual public BaseA{
    public:
    void showB()
    {
        cout<<"Derived class B\n";
    }
};
class DerivedC: public virtual BaseA{
    public:
    void showC()
    {
        cout<<"Derived class C\n";
    }
};
class DerivedD: public DerivedB, public DerivedC{
    public:
    void showD()
    {
        showA();
        showB();
        showC();
        cout<<"Derived class D\n";
    }
};
int main(void)
{
    DerivedD object;
    object.showD();
}