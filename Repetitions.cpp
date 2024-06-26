
/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input
The only input line contains a string of n characters.
Output
Print one integer: the length of the longest repetition.
Constraints

1 \le n \le 10^6

Example
Input:
ATTCGGGA

Output:
3
*/
#include<iostream>
#include <string>
using namespace std;

int main(){

string s ;
cin>>s;
long long count =1 , max=1;
long long i=0;
char currnt ;
for(;i<s.length()-1;i++)
{
    currnt=s[i];
    if(s[i+1] == currnt)
    {
        count++;
        if(count>max)
        { 
            max=count;
        }
    }
    else
    {
        count=1;
    }
}
cout<<max;






return 0;
}