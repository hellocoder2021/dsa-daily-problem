#include <bits/stdc++.h>
using namespace std;

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.
// DO NOT allocate another 2D matrix and do the rotation.

// Time Complexity : O(N^2)
// Space Complexity : O(1)

// problem link :
// https://leetcode.com/problems/rotate-image/
void rotate(vector<vector<int>> &arr)
{
    int n = arr.size();
    int mid = n / 2;

    //reverse row 
    for (int i = 0; i < mid; i++)
        for (int j = 0; j < n; j++)
            swap(arr[i][j], arr[n - i - 1][j]);
    
    //transpose the matrix
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            swap(arr[i][j], arr[j][i]);
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> m(n,vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>m[i][j];
        }
    }
    rotate(m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<m[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}