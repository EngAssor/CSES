/*
Time limit: 1.00 s
Memory limit: 512 MB



A permutation of integers 1,2,\ldots,n is called beautiful if there are no adjacent elements whose difference is 1.
Given n, construct a beautiful permutation if such a permutation exists.
Input
The only input line contains an integer n.
Output
Print a beautiful permutation of integers 1,2,\ldots,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
Constraints

1 \le n \le 10^6

Example 1
Input:
5

Output:
4 2 5 3 1
Example 2
Input:
3

Output:
NO SOLUTION
*/
#include<iostream>
using namespace std;
int main(){
long long i,n;
cin>>n;
if(n == 2 || n==3)
{
    cout<<"NO SOLUTION";
}
else
{
    for(i=n-1 ; i>0 ; i--)
    {
        if(i%2 == 0)
        {
            cout<<i<<" ";
        }
    }
    cout<<n<<" ";
    for(i=1;i<n;i++)
    {
        if(i%2 != 0)
        {
             cout<<i<<" ";
        }
    }
}
return 0;
}