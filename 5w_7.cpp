#include<iostream>
using namespace std;
class newclass{
    private:
    static int count;
    public:
    newclass()
    {
        count++;
    }
    static void display()
    {
        
        cout<<"Number of obj: "<<count<<endl;
    }
    static void reset()
    {
        count=0;
    }
};
int newclass::count=0;
int main()
{
    newclass a,b,c;
    newclass::display();
    newclass::reset();
    newclass g,h;
    newclass::display();
    newclass::reset();
    return 0;
}