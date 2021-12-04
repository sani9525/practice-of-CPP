#include <iostream>
using namespace std;
int main ()
{
int A[]={2,4,6,8,12,3,5,7,9,11};
int key;
cout <<"Enter the key : ";
cin>>key;

for (int i=0; i<10; i++)
{

if (key==A[i])
{
    cout<<"found at element : "<<i<<endl;
    exit(0);
}

}
cout<<"not found the element : "<<endl;
    return 0;
}