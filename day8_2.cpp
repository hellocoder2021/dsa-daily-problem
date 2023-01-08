#include <bits/stdc++.h>
using namespace std;

// Approach  : 1
// Time Complexity : O(n)
// Space Complexity : O(1)

int searchUniq(int arr[], int n)
{
    int k=0;
    for(int i=0; i<n; i++)
    {
        k^=arr[i];
    }
    return k;
}

int main() {
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<< searchUniq(arr, n);
    return 0;
}