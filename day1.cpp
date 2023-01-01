// Find the smallest and second smallest element in an array
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int arr[], int n) {
    vector<int> ans;
    int f=arr[0],s=INT_MAX;
    for(int i=1; i<n; i++)
    {
        if(arr[i] < f)
        {
            s=f;
            f=arr[i];
        }
        else if(arr[i] > f)
        {
            if(arr[i] < s)
            {
                s=arr[i];
            }
        }
    }
    if((s!=INT_MAX)&&(f!=s))
    {
        ans.push_back(f);
        ans.push_back(s);
        return ans;
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}