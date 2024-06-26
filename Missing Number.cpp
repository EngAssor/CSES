/*
You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints

2 \le n \le 2 \cdot 10^5

Example
Input:
5
2 3 1 5

Output:
4


*/
#include<iostream>

int main(){

long long n ,num;
std::cin>> n;
long long a[200001] = {0};
long long  i;
for(i=0; i<n-1 ;i++)
{
    std::cin>> num;
    a[num] = 1;
}
for(i=1; i<=n; i++)
{
    if(a[i] == 0)
    {
        std::cout<< i;
        break;
    }
}
return 0;
}