#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(1)
// Your task is to calculate sum  of primes present as digits of given number N.
// https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1

int primeSum(int n)
{
    int sum = 0;
    while (n)
    {
        int r = n % 10;
        if ((r == 2) || (r == 3) || (r == 5) || (r == 7))
        {
            sum += r;
        }
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<primeSum(n);
	return 0;
}