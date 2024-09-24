#include <iostream> 
using namespace std; 
class Student { 
private: 
string nm; 
int mar1, mar2, mar3; 
public: 

Student(string n, int m1, int m2, int m3) { 
nm = n; 
mar1 = m1; 
mar2 = m2; 
mar3 = m3; 
} 

friend float average(Student s); 
 
void display()  { 
cout << "Student name: " << nm << endl; 
cout << "marks: " << mar1 << "\t" << mar2 << "\t" << mar3 << endl; 
} 
}; 
 
float average(Student s) { 
return (s.mar1 + s.mar2 + s.mar3) / 3.0; 
} 

int main() { 
 
Student stud1("John Doe", 85, 90, 78);
 
 
stud1.display(); 

cout << "Average marks: " << average(stud1) << endl; 
return 0; 
} 