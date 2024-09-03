#include<iostream>
using namespace std;
class Animal{
protected:
void display()
{
    cout<<"This is an Animal"<<endl;
}
};
class Cat:public Animal{
public:
void show()
{
    display();
    cout<<"This is a Cat"<<endl;
}
};
int main()
{
    Cat cat1;
    
    cat1.show();
    return 0;
}