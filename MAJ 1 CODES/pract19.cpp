#include<iostream>
using namespace std;

class student{
    public:
    int num;
    
    void year(){
        int y=2024;
        cout<<y<<endl;
    }
    void month();
};

void student::month()
{
    num=11;
    cout<<num;
}
int main()
{
    student a;
    a.year();
    a.month();

    return 0;
}