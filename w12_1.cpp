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
    
    return 0;
}
