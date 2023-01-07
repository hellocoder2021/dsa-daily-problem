#include <bits/stdc++.h>
using namespace std;

// Approach  : 1
// Time Complexity : O(n)
// Space Complexity : O(1)
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    return (n * (n + 1) / 2) - accumulate(nums.begin(), nums.end(), 0);
}
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        vector<int> v;
        int n, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        cout << missingNumber(v) << endl;
    }
    return 0;
}