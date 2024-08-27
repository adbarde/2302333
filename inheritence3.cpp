#include<iostream>
using namespace std;
class player{
    public:
    string player_Name;
    string player_address;
    int age;
    int height;
     static int countobj;
    player()
    {
        player_Name="John Dias";
        player_address="Panajim Goa";
        age=20;
        height=183;
        countobj++;
    }
   
    void display()
    {
        cout<<"Player Details: "<<endl;
        cout<<"Player Name: "<<player_Name<<endl;
        cout<<"Player Address: "<<player_address<<endl;
        cout<<"Player Age: "<<age<<endl;
        cout<<"Player Height: "<<height<<endl;
        cout<<"Object count: "<<countobj<<endl;
    }
};
int player::countobj=0;
int main()
{
    player a,b,c;
    a.display();

    return 0;
} 