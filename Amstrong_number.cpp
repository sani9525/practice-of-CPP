#include <iostream>
using namespace std;
int main ()
{
int n,r,sum=0,m;
cout<<"Enter the N : ";
cin>>n;
m=n;
while (n>0)
{
    r=n%10;
    n=n/10;
    sum=sum+r*r*r;
}
if(sum==m)
{
    cout<<"its a amstrong ";

}
else{
    cout<<"not a amstrong ";
}


    return 0;
}