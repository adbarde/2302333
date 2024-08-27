#include<iostream>
#include<string>
using namespace std;
int main()
{
    int roll_no, age;
    string name, add;
    
    cout<<"enter name of the student:\n";
    cin>>name;

    cout<<"enter roll no of the student:\n";
    cin>>roll_no;

    cout<<"enter age of the student:\n";
    cin>>age;

    cout<<"enter address of the student:\n";
    cin>>add;
    
    cout<<"\nFollowing are the details:\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll_no<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Address: "<<add<<endl;
    return 0;
}