#include<iostream>
using namespace std;
class Compare{
    public:
    int num1;
    Compare(int n)
    {
        num1=n;
    }
    Compare operator<(const Compare &n1)
    {
        return num1<n1.num1;
    }
};
int main()
{
    Compare obj1(5),obj2(2);
    if(obj1.num1<obj2.num1)
    {
        cout<<"First Object is Smaller\n";
    }
    else
    cout<<"Second object is samller\n";
    return 0;
}