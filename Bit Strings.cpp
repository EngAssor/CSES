#include<iostream>
#include<math.h>
using namespace std;
#define mod    1000000007
long power(long long  x, unsigned long n)
{
    long long pow = 1;

    for (long long  i = 0; i < n; i++) {
        pow = pow * x;
        pow%=mod;
    }

    return pow;
}
int main(){

long long n;
cin>>n;
cout<<power(2,n);

return 0;

}