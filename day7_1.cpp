#include<bits/stdc++.h>
using namespace std;

// Approach  : 1
//Time Complexity : O(logn)
//Space Complexity : O(1)
int searchInSorted(vector<int> arr, int n, int k) 
    { 
        int i=0,j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid] == k)
                return 1;
            else if(arr[mid] < k)
                i=mid+1;
            else
                j=mid-1;
        }
       return -1;       
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        vector<int> v;
        int n, x,k;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        cin>>k;
        cout<<searchInSorted(v,n,k)<<endl;
    }
	return 0;
}