//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// Approach  : 1
//Time Complexity : O(n+m)
//Space Complexity : O(n+m)

// problem link : 
//https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
class Solution{
    public:
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
        vector<int> res;
        int i=0, j=0;
        
        //take first element in result
        if(a[i] < b[j] )
            res.push_back(a[i]),i++;
        else if(a[i] > b[j])
            res.push_back(b[j]),j++;
        else
            res.push_back(a[i]),j++,i++;
            
        for(; i<n&&j<m; )
        {
            if(a[i] < b[j] )
            {
                if(res.back() != a[i]) // if already present , ignore it
                    res.push_back(a[i]);
                i++;
            }
            else if(a[i] > b[j])
            {
                if(res.back() != b[j])
                    res.push_back(b[j]);
                j++;
            }
            else
            {
                if(res.back() != a[i])
                    res.push_back(a[i]);
                j++,i++;
            }
        }
        for(; i<n; i++) {
            if(res.back() != a[i])
                    res.push_back(a[i]);
        }
        for(; j<m; j++) {
            if(res.back() != b[j])
                    res.push_back(b[j]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends