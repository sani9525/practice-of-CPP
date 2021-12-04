#include <iostream>
using namespace std;
int main ()
{
int n,i;
cout<<"Enter n number : ";
cin>>n;
for(i=16; i<=n; i++)
{

if(n%i==0)
{
    cout<<"Factor of "<<n<<" is : "<<i<<endl;
}


}
    return 0;
}