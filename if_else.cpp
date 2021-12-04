#include <iostream>
using namespace std ;
int main ()
{
int age;
cout<<"Enter your age : ";
cin >>age;
if (age>=18 && age<=50)
{
    cout<<"you are eligible for vote !"<<endl;
}
else
{
    cout<<"you are not eligible for vote !"<<endl;
}
    return 0;
}