#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num=4,a=5,b=9,z=-6;
    float x=2.3,y=8.7;
    cout<<"Square root of "<<num<<" is "<<sqrt(num)<<endl;
    cout<<"Power of "<<num<<" is "<<pow(num,2)<<endl;
    cout<<"max between "<<a<<" and "<<b<<" = "<<max(a,b)<<endl;
    cout<<"min between "<<a<<" and "<<b<<" = "<<min(a,b)<<endl;
    cout<<"ceil value of "<<x<<" = "<<ceil(x)<<endl;
    cout<<"floor value of "<<y<<" = "<<floor(y)<<endl;
    cout<<"absolute value of "<<z<<" = "<<abs(z)<<endl;
    cout<<"log of "<<a<<" = "<<log(a)<<endl;
    cout<<"round value of "<<x<<" = "<<round(x);
    return 0;
}