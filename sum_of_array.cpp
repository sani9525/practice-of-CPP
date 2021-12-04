#include <iostream>
using namespace std;
int main ()
{
    int A[7]={4,8,6,9,5,2,7};
    int sum=0,i;
    for(i=0; i<7; i++)
    {
        cout<<"your input Array is : "<<A[i]<<endl;

        sum=sum+A[i];

    }
    cout<<"sum of your all input array is : "<<sum<<endl;
    
    return 0;
}