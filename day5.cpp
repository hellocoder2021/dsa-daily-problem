#include <bits/stdc++.h>
using namespace std;
//Approach 1 : 2 traversal
// Time Complexity : O(N)
// Space Complexity : O(1)

// problem link :
// https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/
int convertFive(int n) {
    int num=0;
    while(n)
    {
        int r=n%10;
        if(r)
            num=num*10+r;
        else
            num=num*10+5;
        n/=10;
    }
    while(num)
    {
        n=n*10+num%10;
        num/=10;
    }
    return n;
}

//Approach 1 : 2 traversal
// Time Complexity : O(N)
// Space Complexity : O(N) //stack calls
int convertFiveRecr(int n) {
    if(n == 0)
        return 0;
    if(n%10)
        return convertFive(n/10)*10+n%10;
    else
        return convertFive(n/10)*10+5;
}


int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
        cout << convertFiveRecr(n) << endl;
    }
}