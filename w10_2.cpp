#include<iostream>
using namespace std;
class Parent{
    private:
    int privatevariable=20;
    public:
    int publicvariable=10;

    void display()
    {
        cout<<"Private value is "<<privatevariable<<endl;
    }
};
class Child :public Parent{
    public:
    void showall()
    {
        cout<<"Public value is "<<publicvariable<<endl;
        display();
    }
};
int main(void)
{
    Child obj1;
    obj1.showall();
}