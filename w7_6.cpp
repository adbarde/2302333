#include <iostream>
using namespace std;

class Circle {
    float radius;
public:
    Circle() 
    {
        radius = 0.0;
    }

    Circle(float r) 
    {
        radius = r;
    }

    Circle(const Circle &c) 
    {
        radius = c.radius;
    }

    void displayArea() 
    {
        cout << "Area: " << 3.14159 * radius * radius << endl;
    }
};

int main() 
{
    Circle circle1;          
    Circle circle2(3.4);     
    Circle circle3(circle2);  

    cout << "Circle 1: ";
    circle1.displayArea(); 

    cout << "Circle 2: ";
    circle2.displayArea(); 

    cout << "Circle 3 (Copy of Circle 2): ";
    circle3.displayArea(); 

    return 0;
}
