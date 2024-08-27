#include<iostream>
using namespace std;
struct car
{
   int carno;
   string carcolor;
};


int main()
{
    car a;
    a.carno=1010;
    a.carcolor="red";
    cout<<a.carcolor<<"\t"<<a.carno;

    return 0;
}
