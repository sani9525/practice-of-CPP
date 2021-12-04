#include <iostream>
using namespace std;
int main ()
{
int u,v,a;
float speed;

cout<<"Enter the u ,v and a : ";
cin >>u>>v>>a;
speed= (u*u - v*v)/(2*a);
cout<<"speed is : "<<speed<<endl;

    return 0;
}