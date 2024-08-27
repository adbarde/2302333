#include<iostream>
using namespace std;
class employee{
    public:
    int employeeId;
    string employee_Name;
    string employee_address;
    void employee_info()
    {
        cout<<" Employee Info: "<<endl;
        cout<<" Employee Id: "<<employeeId<<endl;
        cout<<" Employee Name: "<<employee_Name<<endl;
        cout<<" Employee Address: "<<employee_address<<endl;
    }

};
class permanent_employee: public employee{
    public:
    float basic_Pay;
    float DA;
    float HRA;
    float TA;
    void salary()
    {
        float salary=0;
        salary=basic_Pay+DA+HRA+TA;
        cout<<" The Salary = "<<salary<<endl;
    }

};
class manager: public permanent_employee{
    public:
    float advance_Salary;
    string vehicle;
    void display()
    {
        cout<<"The Advance Salary is "<<advance_Salary<<endl;
        cout<<"The Vehicle is "<<vehicle<<endl;
    }

};
int main()
{
    manager obj1;
    obj1.employeeId=1020333;
    obj1.employee_Name="Riya Das";
    obj1.employee_address="Mapusa Goa";
    obj1.basic_Pay=30000;
    obj1.DA=5000;
    obj1.HRA=6500;
    obj1.TA=2000;
    obj1.advance_Salary=12000;
    obj1.vehicle="Alto 800";
    obj1.employee_info();
    obj1.salary();
    obj1.display();

    return 0;
}