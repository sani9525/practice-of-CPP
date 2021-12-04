#include <iostream>
using namespace std;
int main ()
{
int A[10]={2,4,6,8,12,3,5,7,9,11};
int sum=0;
// for (int i=0; i<10; i++) // we can also use for each loop that is for (X:A) lets us see
 for(int X:A)
{
sum=sum+X;
cout<<"Sum of all the element is : "<<sum<<endl;

}
cout<<"completed sum of all element is : "<<sum<<endl;
    return 0;
}