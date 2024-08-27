#include<iostream>
using namespace std;
int main()
{
    int roll_no,age;
    string name;
    string address;

    cout<<"enter the name of the student\n";
    cin>>name;

    cout<<"enter the roll no of the student\n";
    cin>>roll_no;

    cout<<"enter the age of the student\n";
    cin>>age;

    cout<<"enter the address of the student\n";
    cin>>address;

    cout<<"\nFollowing are the details of the student\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll No: "<<roll_no<<"\n";
    cout<<"Age: "<<age<<"\n";
    cout<<"Address: "<<address<<"\n";

    return 0;


}