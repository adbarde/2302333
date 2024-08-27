#include<iostream>
using namespace std;
class mynew{
    public:
    int a=48;
    private:
    int y=90;
    int z;
    public:
    void display(int temp)
    {
        z=temp;
        cout<<z<<endl;
        cout<<y;
    }
};
int main()
{
    mynew obj;
    cout<<obj.a<<endl;
    obj.display(33);

    return 0;
}