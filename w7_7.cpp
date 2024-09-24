#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 5, int i = 7)
    {
        real = r;
        imag = i;
    }
    void print() { cout << real << " + i" << imag << '\n'; }
};
int main()
{
    Complex c2;
    Complex c3(11, 3);
    c2.print();
    c3.print();
    return 0;
}