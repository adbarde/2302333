#include<iostream>
using namespace std;
class myclass{
    public:
    static int countobj;
    myclass()
    {
        countobj++;
    }
    void display()
    {
        cout<<"Number of Obj: "<<countobj<<endl;
    }
    
};
int myclass::countobj=0;
int main()
{
    myclass a,b,c;
    a.display();
    myclass d,e;
    d.display();

    return 0;
}