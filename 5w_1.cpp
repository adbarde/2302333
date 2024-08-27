#include<iostream>
using namespace std;
struct 
{
   int rollno;
   string name;
}mystruct;


int main()
{
    mystruct.rollno=10;
    mystruct.name="anshika";
    cout<<mystruct.rollno<<"\t"<<mystruct.name;

    return 0;
}
