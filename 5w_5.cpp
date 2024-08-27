#include<iostream>
using namespace std;
class myclass{
    public:
    int num;
    inline void funct(int n1)
    {
        cout<<"The number is "<<n1;
    }
};
int main()
{
    myclass a;
    a.num=10;
    a.funct(a.num);
    return 0;
}