#include <iostream>
using namespace std;
int main ()
{
int n,i,sum;
sum=0;
cout<<"Enter N number : ";
cin>>n;

for(i=0; i<=n; i++)
{
    sum=sum+i;
}
cout<<"Sum of n is : "<<sum<<endl;

    return 0;
}