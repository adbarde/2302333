#include<iostream>
using namespace std;
class Parent{
    protected:
    int protectedId;

};
class Child : public Parent{
    public:
    void setId(int id)
    {
        protectedId=id;
    }
    void display()
    {
        cout<<"ProtectedId = "<<protectedId;
    }
};
int main()
{
    Child c;
    c.setId(20);
    c.display();

    return 0;
}
