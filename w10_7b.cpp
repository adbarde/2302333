#include<iostream>
using namespace std;
class GrandParent{
    public:
    GrandParent()
    {
        cout<<"GrandParent Constructor called\n";
    }
    ~GrandParent()
    {
        cout<<"GrandParent Destructor called\n";
    }
};
class Parent : public virtual GrandParent{
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
class ParentB : public virtual GrandParent{
    public:
    ParentB()
    {
        cout<<"ParentB Constructor called\n";
    }
    ~ParentB()
    {
        cout<<"ParentB Destructor called\n";
    }
};
class ChildA : public Parent, public ParentB{
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
