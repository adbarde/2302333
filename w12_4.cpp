//Using base class pointer to access derived class object 
#include<iostream>
using namespace std;
class Books{
    public:
    string book1="Maths";
    virtual void showbook()
    {
        cout<<book1<<endl;
    }
};
class Algebra : public Books{
    public:
    string book="Matrix Algebra";
    void showbook()
    {
        cout<<book<<endl;
    }
};
int main(void)
{
    Books *ptr=new Algebra();
    ptr->showbook();   
}