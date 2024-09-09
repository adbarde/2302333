#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    Employee(){
        cout<<"Default constructor invoked! \n";
    }
    Employee(int i, string nm, float sal)
    {
        id=i;
        name=nm;
        salary=sal;
        cout<<"Parameterised constructor invoked! \n";
    }
    void display()
    {
        cout<<" ID = "<<id<<" Name = "<<name<<" Salary = "<<salary<<endl;
    }
    Employee(Employee& emp)
    {
        id=emp.id;
        name=emp.name;
        salary=emp.salary;
        cout<<"Copy constructor invoked! \n";
    }
};
int main()
{
    Employee e1,e2,e3(2,"ram",2000.34);
    e3.display();
    Employee e4=e3;
    e4.display();
    return 0;
}