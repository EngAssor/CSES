/*
Your task is to calculate the number of trailing zeros in the factorial n!.
For example, 20!=2432902008176640000 and it has 4 trailing zeros.
Input
The only input line has an integer n.
Output
Print the number of trailing zeros in n!.
Constraints

1 \le n \le 10^9

Example
Input:
20

Output:
4

*/
#include<iostream>
using namespace std;
typedef unsigned long long ll;

int main(){

ll n=0  ;
cin>>n;

ll count=0; 
//i want to clacute the trailing zeros

for(ll i=5;i<=n;i*=5){
  count+=n/i; 

}   

cout<<count;

  

}