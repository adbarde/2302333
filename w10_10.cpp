#include<iostream>
using namespace std;
class Parent{
    public:
    Parent()
    {
        cout<<"Parent Constructor called\n";
    }
    ~Parent()
    {
        cout<<"Parent Destructor called\n";
    }
};
class ChildA : public Parent{
    public:
    ChildA()
    {
        cout<<"Child Constructor called\n";
    }
    ~ChildA()
    {
        cout<<"Child Destructor called\n";
    }

};
int main()
{
    ChildA obj;
    return 0;
}
