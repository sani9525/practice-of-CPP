#include <iostream>
using namespace std;
int main ()
{
int day;
cout<<"Enter day numbers : ";
cin>>day;
if(day==1)
{
    cout<<"Monday"<<endl;
}
else if (day==2)
{
    cout<<"Tuesday"<<endl;
}
else if (day==3)
{
    cout<<"Wednesday"<<endl;
}
else if (day==4)
{
    cout<<"Thursday"<<endl;
}
else if (day==5)
{
    cout<<"Friday"<<endl;
}
else if (day==6)
{
    cout<<"Saturday"<<endl;
}
else if (day==7)
{
    cout<<"sunday"<<endl;
}
else 
{
    cout<<"Invalid number"<<endl;
}


    return 0;
}