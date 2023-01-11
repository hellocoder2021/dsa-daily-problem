#include <bits/stdc++.h>
using namespace std;
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each
// element in the result must be unique and you may return the result in any order.
// Task 2
vector<int> intersection(vector<int> &a, vector<int> &b)
{
    vector<int> ans;
    vector<int> freq(1001, -1);
    for (auto x : a)
    {
        freq[x] = 1;
    }
    for (auto x : b)
    {
        if (freq[x] == 1)
        {
            ans.push_back(x);
            freq[x] = -1;
        }
    }
    return ans;
}

// Task 1
void duplicateZeros(vector<int> &arr)
{
    int n = arr.size();
    int i, c;
    for (i = 0; i < n - 1; i++)
    {
        c = arr[i];
        if (c == 0)
        {
            i++;
            if (i >= n)
                break;
            c = arr[i];
            arr[i] = 0;
        }
        if (i >= n)
            break;
        arr[i] = c;
    }
}
