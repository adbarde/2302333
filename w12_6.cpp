#include<iostream>
using namespace std;
class Base{
    public:
    virtual void hello()=0;
    ~Base(){
        cout<<"Pointer Deleted\n";
    }
};
class Derived: public Base{
    public:
    void hello()override
    {
        cout<<"Hello World\n";
    }

};
int main(void)
{
    Base *ptr=new Derived();
    ptr->hello();
    delete ptr;
}