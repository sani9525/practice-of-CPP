#include <iostream>
using namespace std;
int main ()
{
    string name;
    cout<<"Enter your name : ";
     // cin>>name;   // that is a use for one line charectar only
    getline(cin,name);
    
  cout<<"congratulation mr. : "<<name<<endl; 


    return 0;
}