#include<iostream>
using namespace std;
class A{
    public:
    void showA()
    {
        cout<<"Class A\n";
    }
};
class B : virtual public A{
    public:
    void showB()
    {
        cout<<"Class B\n";
    }
};
class C : virtual public A{
    public:
    void showC()
    {
        cout<<"Class C\n";
    }
};
class D : public B, public C{
    public:
    void showD()
    {
    showA();
    showB();
    showC();
        cout<<"Class D\n";
    }
};
int main()
{
    D obj1;
    
    obj1.showD();
    return 0;
}