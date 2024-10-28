#include<iostream>
using namespace std;
class Employee{
    public:
    virtual void calculateSalary()
    {
        cout<<"Salary Calculations\n";
    }
};
class SalariedEmployee: public Employee{
    public:
    void calculateSalary()override
    {
        int sal=0,no_days=30,per_day=1000;
        sal=per_day*no_days;
        cout<<"Salary of Salaried Employee = Rs."<<sal<<endl;
    }
};
class HourlyEmployee: public Employee{
    public:
    void calculateSalary() override
    {
        int saly=0,no_hours=24,per_hour=500;
        saly=per_hour*no_hours;
        cout<<"Salary of Hourly Employee = Rs."<<saly<<endl;
    }
};
int main(void)
{
    
    Employee* emp[2];
    emp[1]= new SalariedEmployee();
    emp[0]= new HourlyEmployee;
    for(int i=0;i<2;i++)
    {
        emp[i]->calculateSalary();
    }
    for(int i=0;i<2;i++)
    {
        delete emp[i];
    }
}