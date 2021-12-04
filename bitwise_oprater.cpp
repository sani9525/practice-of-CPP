#include <iostream>
using namespace std;

int main ()
{
int x=12,y=8,z,v,s;

s=x^y;
z=x&y;
v=x|y;
y=x<<1;
x=y>>1;
cout<<"The value of Z is : "<<z<<endl;
cout<<"The value of V is : "<<v<<endl;
cout<<"The vale of S is : "<<s<<endl;
cout <<"The value of Y is : "<<y<<endl;
cout <<"The value of X is : "<<x<<endl;

return 0;
}
