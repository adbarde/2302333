#include <iostream>
using namespace std;
class New{
    private:
    int num=20;
    public:
    void sum(int num)
    {
        int sum = this->num + num;
        cout<<"Sum = "<<this->num<<" + "<<num<<" = "<<sum<<endl;
    }
};
int main(void)
{
    New a;
    a.sum(10);

}