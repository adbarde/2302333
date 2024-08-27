#include<iostream>
using namespace std;
void swaping(int a, int b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"int the function"<<" a= "<<a<<"b= "<<b<<endl;

}
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    swaping(a,b);
    
    return 0;
}