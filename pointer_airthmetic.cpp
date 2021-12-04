#include <iostream>
using namespace std;
int main ()
{
int A[]={2,4,6,8,100};

int *p=A;
p=p+2;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
p++;
cout<<*p<<endl;
p--;
cout<<*p<<endl;
    return 0;
}