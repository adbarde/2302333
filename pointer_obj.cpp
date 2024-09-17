#include<iostream>
using namespace std;
class Myclass{
    public:
    void display()
    {
        cout<<"this is Myclass\n";
    }
};
int main()
{
    Myclass obj;
    Myclass* ptr=&obj;
    ptr->display();
    Myclass *obj1=new Myclass;
    obj1->display();
    return 0;
}