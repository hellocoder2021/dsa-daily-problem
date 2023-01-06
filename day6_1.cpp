#include <bits/stdc++.h>
using namespace std;

//Time Complexity : O(N)
//Space Complexity : O(1)

// problem link : 
// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=1; i<n; i++){
            if(arr[i-1] > arr[i])
                return false;
        }
        return true;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}