#include<iostream>
using namespace std;
long long get_places(long long n)
{
    long long total = (n*n)*((n*n)-1)/2;
    long long places = total - 4*(n-2)*(n-1);
    return places;
}
int main()
{
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)
        cout<<get_places(i)<<endl;
}