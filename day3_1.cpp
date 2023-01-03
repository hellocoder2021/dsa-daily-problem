// Pascal's Triangle
// approach 1
// Time Complexity : O(N^2)
// Space Complexity : O(n^2)

// problem link :
// https://leetcode.com/problems/pascals-triangle/
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n)
{
    vector<vector<int>> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> ans(generate(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}