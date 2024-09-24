#include<iostream>
using namespace std;
class Increment{
    public:
    int a,b;
    Increment(int a1=1, int a2=2)
    {
        a=a1;
        b=a2;
    }
    Increment operator ++()
    {
        ++a;
        return *this;
    }
};
int main()
{
    Increment obj1;
    cout<<"Sum before increment = "<<(obj1.a+obj1.b)<<endl;
    ++obj1;
    cout<<"Sum after increment = "<<(obj1.a+obj1.b)<<endl;
    return 0;
}