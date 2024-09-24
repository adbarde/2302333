#include<iostream>
using namespace std;
class NewBase{
    public:
    static int count;
    NewBase()
    {
        count++;
        cout<<"Constructor is invoked\n";
        cout<<"Count = "<<count<<endl;
    }
    ~NewBase()
    {
        count--;
        cout<<"Destructor is invoked\n";
        cout<<"Count = "<<count<<endl;
    }
 
};
int NewBase::count = 0;
int main()
{
    NewBase a1,a2,a3;
    return 0;
}