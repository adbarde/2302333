#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    string emp_name;
    float emp_sal;
    void getdata()
    {
        
        cout<<"Name: \n";
        cin>>emp_name;
        cout<<"Id: \n";
        cin>>emp_id;
        cout<<"Salary: \n";
        cin>>emp_sal;
    }
    void putdata()
    {
        
        cout<<"Name: "<<emp_name;
        cout<<"     Id: "<<emp_id;
        cout<<"     Salary: "<<emp_sal<<endl;
    }
};
int main()
{
    employee doctor[3],teacher[2];
    for(int i=0;i<3;i++)
    {
        cout<<"Enter doctor data:\n";
        doctor[i].getdata();
    }
    for(int i=0;i<2;i++)
    {
        cout<<"Enter Teacher data:\n";
        teacher[i].getdata();
    }
    cout<<"Doctors are:\n";
    for(int j=0;j<3;j++)
    {
        
        doctor[j].putdata();
    }
    cout<<"Teachers are: \n";
    for(int j=0;j<2;j++)
    {
        
        teacher[j].putdata();
    }

    return 0;
}