#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-insert-position/

class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        int l=0;
        int r=arr.size()-1;
        int mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(arr[mid] == k)
                return mid;
            else if(arr[mid] > k)
                r=mid-1;
            else
                l=mid+1;
        }

        return arr[mid] > k ? mid : mid+1;
    }
};