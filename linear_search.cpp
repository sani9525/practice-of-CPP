#include <iostream>
using namespace std;
int main ()
{
int A[10]={6,11,25,8,15,7,12,20,9,14};
int n=10,i,key;
cout<<"Enter number : ";

for (i=0; i<n; i++ )
{
    cin>>A[i];
}
cout<<"Enter the key : ";
cin>>key;

for (i=0; i<n; i++)
{

if(key==A[i])
{
    cout<<"found at "<<i;
    return 0;
}

}
cout<<"Not Found ";

    return 0;
}