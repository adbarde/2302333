// 5. Program with virtual function
#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void show() override { // Override virtual function
        cout << "Derived class show function." << endl;
    }
};

int main() {
    Base* ptr = new Derived(); // Base pointer pointing to Derived object

    ptr->show();               // Calls Derived's show due to polymorphism

    delete ptr;               // Clean up memory
    return 0;
}

/* 
This program illustrates polymorphism through virtual functions in C++. The base class has a virtual function named `show()`, which is overridden in the derived class. 
When we create a base class pointer that points to an instance of the derived class and call `show()` through this pointer, it invokes the overridden version from the derived class instead of the base version. 
This behavior demonstrates how virtual functions enable dynamic binding at runtime, allowing for more flexible and extensible code design.
*/

