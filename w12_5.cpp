#include<iostream>
using namespace std;
class Major{
    public:
    virtual void show_m()
    {
        cout<<"This is the Major Class\n";
    }
};
class Minor: public Major{
    public:
    void show_m() override
    {
        cout<<"This is the Minor Class\n";
    }
};
int main(void)
{
    Major* ptr=new Minor();
    ptr->show_m();
}