#include<iostream>
using namespace std;

class student{
    public:
    int num;
    string name;
    private:
    int y;
    public:
    void year(){
        y=2024;
        cout<<y;
    }

};
int main()
{
    student a;
    a.num=44;
    a.name="Riya";
    cout<<a.name<<endl<<a.num<<endl;
    a.year();

    return 0;
}