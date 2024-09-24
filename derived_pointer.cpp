// 4. Using base class pointer to access derived class object
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
    Base* ptr = new Derived(); // Base pointer pointing to Derived object

    ptr->show();               // Call base class method

    // To access derived class method, we need to cast:
    Derived* dPtr = static_cast<Derived*>(ptr);
    dPtr->display();           // Call derived class method

    delete ptr;               // Clean up memory
    return 0;
}

/* 
This program demonstrates how to use a base class pointer to access a derived class object in C++. We create a base class pointer that points to an instance of the derived class. 
While we can directly call methods defined in the base class using this pointer, accessing derived class-specific methods requires casting. 
In this case, we use `static_cast` to convert our base class pointer back into a derived class pointer before calling the derived method. 
Finally, we clean up dynamically allocated memory using `delete`.
*/

