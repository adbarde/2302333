#include<iostream>
#include<math.h>
using namespace std;
class circle{
    private:
    float point,radius;
    public:
    circle(int a=0, int b=0)
    {
        point=a;
        radius=b;
        total++;
    }
    friend void display(circle& obj);
    bool operator ==(circle const& obj)
    {
        return (point == obj.point && radius == obj.radius);
    }
    static int total;
    static void showtotal()
    {
        cout<<"total no obj: "<<total<<endl;
    }
    inline void area()
    {
        float ar=0;
        ar = (3.14159*radius*radius);
        cout<<"Distance from origin is = "<<ar<<endl;
    }
    
};
int circle::total;
void display(circle& obj)
{
    cout<<"centre  = "<<obj.point<<" ";
    cout<<"radius  = "<<obj.radius<<endl;

}
int main(void)
{
    circle obj(3,4),obj2(5,4);

    display(obj);
    display(obj2);
    
    if( obj == obj2)
   {
    cout<<"both circles are equal\n";
   }
   else
   cout<<"both circles are NOT equal\n";
    

    circle::showtotal();

    
}