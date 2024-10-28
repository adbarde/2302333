#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound()
    {
        cout<<"Sound of animals\n";
    }
};
class Dog: public Animal{
    public:
    void sound()override
    {
        cout<<"Bhowww\n";
    }
};
class Cat: public Animal{
    public:
    void sound() override
    {
        cout<<"mewwww\n";
    }
};
int main(void)
{
    // Animal* ptr=new Dog;
    // ptr->sound();
    // Animal* ptr2=new Cat;
    // ptr2->sound();
    Animal* animals[3];
    animals[1]= new Dog();
    animals[0]= new Cat;
    for(int i=0;i<3;i++)
    {
        animals[i]->sound();
    }
    for(int i=0;i<3;i++)
    {
        delete animals[i];
    }
}