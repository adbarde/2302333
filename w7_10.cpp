#include<iostream>
using namespace std;
class Parent{
    public:
    int x,y,z;
    Parent(int a=1, int b=2, int c=3)
    {
        x=a;
        y=b;
        z=c;
    }
    Parent operator -()
    {
        return Parent(-x,-y,-z);
    }
};
int main()
{
    Parent a1;
    Parent a2= -a1;
    cout<<" x = "<<a1.x<<" y = "<<a1.y<<" z = "<<a1.z<<endl;
    cout<<" x = "<<a2.x<<" y = "<<a2.y<<" z = "<<a2.z<<endl;
    return 0;
}