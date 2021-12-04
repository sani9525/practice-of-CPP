#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
float a,b,c,r1,r2;
cout<<"Enter a,b and c : ";
cin>>a>>b>>c;
  r1=(-b + sqrt(b*b-4*a*c))/(2*a);
r2=(-b - sqrt(b*b-4*a*c))/(2*a);

cout<<"root are r1 is : "<<r1<<endl<<"root are r2 is :"<<r2<<endl;

    return 0;
}
