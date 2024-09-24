// 6. Program with pure virtual function
#include <iostream>

using namespace std;

class AbstractBase { // Abstract base class with pure virtual function
public:
   virtual void show() = 0; // Pure virtual function making this an abstract class
};

class ConcreteDerived : public AbstractBase { // Concrete derived class implementing pure virtual function
public:
   void show() override { // Override pure virtual function
       cout << "ConcreteDerived implementation of show." << endl;
   }
};

int main() {
   AbstractBase* ptr = new ConcreteDerived(); // Pointer of type AbstractBase pointing to ConcreteDerived

   ptr->show();               // Calls ConcreteDerived's implementation

   delete ptr;               // Clean up memory
   return 0;
}

/* 
This program demonstrates pure virtual functions in C++. The abstract base class `AbstractBase` defines a pure virtual function named `show()` which does not provide any implementation. 
Any derived classes must implement this function in order to be instantiated. In this case, `ConcreteDerived` implements the pure virtual function by providing its own version of `show()`. 
In the main function, we create an instance of `ConcreteDerived`, assign it to a base type pointer, and call its implementation of `show()`. This showcases how abstract classes can be used as interfaces for polymorphic behavior.
*/

