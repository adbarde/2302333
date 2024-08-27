#include<iostream>
using namespace std;
class emp{
    public:
    int x;
    emp add(emp obj1,emp obj2)
    {
        emp obj;
        obj.x=obj1.x+obj2.x;
        return(obj);
    }
};
int main()
{
    emp a,b,c;
    a.x=20;
    b.x=30;
    c=c.add(a,b);
    cout<<"value of a: "<<a.x<<endl;
    cout<<"value of b: "<<b.x<<endl;
    cout<<"value of c: "<<c.x<<endl;

    return 0;
}