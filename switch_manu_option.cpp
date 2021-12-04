#include <iostream>
using namespace std;
int main ()
{
cout<<"Manu \n";
cout<<"1. Add\n 2. Sub \n 3. mul\n 4. div\n";
int option;
cout<<"Enter your choice";
cin>>option;
int a,b,c;
cout<<"Enter Two Number : ";
cin>>a>>b;
switch(option)
    case 1:
    cout<<c=a+b;
    break;
    case 2:
    cout<<c=a-b;
    break;
    case 3: 
    cout<<c=a*b;
    break;
    case 4:
    cout<<c=a/b;
    default :
    cout<<"Wrong";

}
cout<<"Result is"<<c<<endl;
    return 0;
}