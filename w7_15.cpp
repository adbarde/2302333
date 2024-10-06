#include<iostream>
#include <string>
using namespace std;
class myclass{
    public:
    string strg;
    myclass(string s)
    {
        strg=s;
    }
    myclass operator +(const myclass& strr)
    {
        string str23= strg + strr.strg;
        return myclass(str23);
    }
    void show()
    {
        cout<<strg<<endl;
    }
};
int main(void)
{
    myclass obj1("Anshika ");
    myclass obj2("Barde");
    myclass obj3 = obj1 + obj2;
    obj3.show();

}