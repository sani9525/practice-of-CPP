#include <iostream>
using namespace std;
int main ()
{int m,n;
cout<<"Enter M and N numbers : ";
cin>>m>>n;
while(m!=n)
{
    if(m>n)
    {
        m=m-n;
    }
    else if (n>m)
    {
        n=n-m;
    }
    
}
cout<<"The gcd of M and N is : "<<m<<endl;
    return 0;
}