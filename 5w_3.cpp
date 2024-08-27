#include<iostream>
using namespace std;
class myclass{
    public:
    int no;
    string name;
    void funct1();
    void funct2(int no,string name)
    {
        cout<<no<<"\t"<<name<<endl;
    }
};

void myclass::funct1()
{
    cout<<"hello!"<<endl;
}

int main()
{
    myclass obj1;
    
    obj1.funct1();
    obj1.funct2(10,"anshika");
    return 0;
}