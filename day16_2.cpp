#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        auto temp=upper_bound(arr.begin(), arr.end(),target);
        if(temp != arr.end())
            return *temp;
        return arr[0];
    }
};