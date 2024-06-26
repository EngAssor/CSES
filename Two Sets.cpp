#include<iostream>
using namespace std;
     long long set1[1000000]={0};
     long long set2[1000000]={0};
int main(){

    long long n=0;
    cin>>n;
    long long i ,j=0,k=0,sum=0,res=0;
  
    sum=n*(n+1)/2;
    
    if(sum%2)
    {
        cout<<"NO";
    }
    else
    {
        res=sum/2;
        for(i=n;i>=1;i--)
        {
            if(i<=res)
            {
                set1[j++]=i;
                res-=i;
            }
            else
            {
                set2[k++]=i;

            }
        }
        cout<<"YES"<<endl;
        cout<<j<<endl;
        for(i=0;i<j;i++)
         {
            cout<<set1[i]<<" ";
          }
             cout<<endl<<k<<endl;
         for(i=0;i<k;i++)
         {
        cout<<set2[i]<<" ";
         }
    }
   

return 0;
}