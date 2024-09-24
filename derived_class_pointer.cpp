// 3. Program with pointer to derived class
#include <iostream>

using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function." << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Derived d;         // Create an object of Derived class
    Base* ptr = &d;   // Pointer of type Base pointing to Derived object

    ptr->show(); 
         // Call base class method
    // ptr->display(); // This line would cause a compilation error

    return 0;
}

/* 
This program demonstrates using a pointer to a derived class in C++. The `Base` class has a method called `show()`, while the `Derived` class inherits from it and has its own method called `display()`. 
In the `main` function, we create an object of the derived class and assign its address to a base class pointer. 
While we can call methods from the base class using this pointer, attempting to call derived class methods (like `display()`) directly through a base class pointer will result in a compilation error because those methods are not part of the base class interface.
*/

