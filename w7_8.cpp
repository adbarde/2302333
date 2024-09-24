#include<iostream>
using namespace std;
class Base{
    public:
    int x,y;
    Base(int a, int b){
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"Sum of x + y = "<<(x+y)<<endl;
    }
};
int main()
{
    Base *obj = new Base(13,8);
    obj->show();
    delete obj;
    return 0;
}