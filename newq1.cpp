#include<iostream>
using namespace std;
template <typename K, typename V>
class Dictionary{
    public:
   K key;
   V value;
    void add()
    {
        cout<<"Enter the key:\n";
        cin>>key;
        cout<<"Enter the values:\n";
        cin>>value;
       
    }
    void remove(const Dictionary& x)
    {
         if(x.key==key)
         {

         }
    }
    void retrieving()
    {
        cout<<"Key: "<<key<<endl;
        cout<<"Value: "<<value<<endl;
    }
};
int main(void)
{
    int n;
    cout<<"Enter the number of keys will be entered: ";
    cin>>n;
    Dictionary<string,string> d1[10];
    for(int i=0;i<n;i++)
    {
    d1[i].add();
        try
        {
            for(int j=0;j<n;j++)
            {
                if(d1[i].key==d1[j].key)
                {
                    throw runtime_error("Error: Duplicate key");
                }
            }
        }
        catch(const runtime_error& e)
        {
            cout << e.what() << '\n';
        }
        
    
    }   

    for(int i=0;i<n;i++)
    {
    d1[i].retrieving();
    }  
    
    for(int i=0;i<n;i++)
    {
    d1[i].remove(d1[1]);
    }  
    

}
