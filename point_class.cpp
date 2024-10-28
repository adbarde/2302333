#include<iostream>
#include<math.h>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int a=0, int b=0)
    {
        x=a;
        y=b;
        total++;
    }
    friend void display(point& obj);
    point operator +(point const& obj)
    {
        point newcoordinate;
        newcoordinate.x = x + obj.x;
        newcoordinate.y = y + obj.y;
        total--;
        return newcoordinate;
    }
    static int total;
    static void showtotal()
    {
        cout<<"total no obj: "<<total<<endl;
    }
    inline void distance()
    {
        float dist=0;
        dist = sqrt((x*x)+(y*y));
        cout<<"Distance from origin is = "<<dist<<endl;
    }
    
};
int point::total;
void display(point& obj)
{
    cout<<"x = "<<obj.x<<" ";
    cout<<"y = "<<obj.y<<endl;

}
int main(void)
{
    point obj(3,4),obj2(2,3);

    display(obj);
    display(obj2);
    point::showtotal();

    point obj3;
    obj3=obj + obj2;
    display(obj3);

    point::showtotal();

    obj.distance();
}