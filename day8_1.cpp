// Given an array arr[] of N positive integers.
// Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    // Approach  : 1
    // Time Complexity : O(n), 2 traversals
    // Space Complexity : O(1)
	void pushZerosToEnd(int arr[], int n) {
	    int res=0;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i] != 0)
	            arr[res++]=arr[i];
	        
	    }
	    for(; res<n; res++)
	        arr[res]=0;
	}
    // Approach  : 2  | two pointer approach
    // Time Complexity : O(n), 1 traversals
    // Space Complexity : O(1)
	void pushZerosToEnd2(int arr[], int n) {
	    int res=0;
	    for(int i=0; i<n; i++)
	    {
	        if(arr[i] != 0){ //conside only non-zero
	            arr[res]=arr[i];
            if(res != i) arr[i]=0;
            res++; 
            } 
	    }
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}