#include<iostream>
using namespace std;
typedef unsigned long long ll;

 ll fact(ll n)
{
    ll c=0;
    ll i=n;
    ll FACT=1;
    for(;i>1;i--)
    {
        FACT*=i;

     //   cout<<"i IS = "<<i<<endl;
        if(FACT%10 == 0)
          {
              c++;
       // cout<<"C is ="<<c<<endl;

        FACT/=10;
          }
          FACT
     //   cout<<"Fact is  ="<<FACT<<endl;
    }
return c;
}

int main(){
ll n=0;
cin>>n;
cout<<fact(n);
return 0;
}