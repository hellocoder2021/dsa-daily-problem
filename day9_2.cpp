#include<bits/stdc++.h>
using namespace std;

// Approach 1 
// Time Complexity : O(log n)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/0

bool isPowerofTwo(long long n){
    while(n!=1)
    {
        if(n%2)
            return 0;
        n/=2;
    }
    return 1;   
}
// Approach 2 
// Time Complexity : O(log n)
// Space Complexity : O(1)
bool isPowerofTwo(long long n){
    int count=0;
    while(n)
    {
        if(n & 1){
            count++;
        }
        n>>=2;
    }
    if(count == 1) return 1;
    return 0;   
}
// Approach 3
// Time Complexity : O(1)
// Space Complexity : O(1)
bool isPowerofTwo(long long n){
    if(!n)
        return 0;
    return (ceil(log2(n)) == floor(log2(n)));   
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerofTwo(n);
	return 0;
}