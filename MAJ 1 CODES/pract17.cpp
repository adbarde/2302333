#include<iostream>
using namespace std;

struct 
{
    int rollno;
    string name;
}mystruct;

struct car
{
    string model;
    string color;
};

int main()
{
    mystruct.rollno=10;
    mystruct.name="anshika";
    cout<<mystruct.name<<"\t"<<mystruct.rollno<<endl;

    car a;
    a.model="X5";
    a.color="red";
    cout<<a.model<<"\t"<<a.color;

    return 0;
}