// Time Complexity : O(n)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void convertToWave(int n, vector<int>& arr){
        
        for(int i=1; i<n; i+=2)
        {
            swap(arr[i-1],arr[i]);
        }
        
    }
};
int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}