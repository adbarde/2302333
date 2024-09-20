//Demonstrate pointers to members eg.update () marks of 
//student 
#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int marks;

public:
 
    Student(string n, int m) 
    {
        name=n; 
        marks=m;
    }

    void display() 
    {
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void updateMarks(int newMarks) 
    {
        marks = newMarks;
        cout<<"Marks Updated\n";
    }
    void show(Student s) 
    {
        string Student::*ptr1 = &Student::name;
        s.*ptr1="Sham";
       cout<<s.*ptr1<<endl;
       cout<<s.name;
    }
};

int main() 
{
    Student student1("Ram", 77);

    void (Student::*ptr)(int) = &Student::updateMarks;
    
    student1.display();

    (student1.*ptr)(100);

    student1.display();
    
    student1.show(student1);

    return 0;
}
