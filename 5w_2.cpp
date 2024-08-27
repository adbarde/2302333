#include<iostream>
using namespace std;
class myclass{
    public:
    int rollno;
    string name;
    
};
int main()
{
    myclass obj;
    obj.rollno=20;
    obj.name="anshika";
    cout<<obj.name<<"\n"<<obj.rollno;

    return 0;
}