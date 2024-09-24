#include<iostream>
using namespace std;
class number{
    public:   
    int a;
    number(int a1=1)
    {
        a=a1;
    }
    number operator-(number &c)
    {
        return(number(a-c.a));
    }

};

int main()
{
    number obj1(20),obj2(10);
    number obj3=obj1 - obj2;
    cout<<"Difference = "<<obj3.a<<endl;
    return 0;
}
