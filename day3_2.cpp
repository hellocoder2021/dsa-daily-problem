#include<bits/stdc++.h>
using namespace std;

//approach 1 : 3 pointers approach
//intution : think how you can sort only 0 2 1
//highest always at end ; lowest always at start
//Time Complexity : O(N)
//Space Complexity : O(1)

// problem link : 
// https://leetcode.com/problems/sort-colors/

void sortColors(vector<int>& arr) {
        int n=arr.size();
        for(int i=0,j=n-1,k=0; k<=j;)
        {
            if(arr[k] == 0)
            {
                swap(arr[i],arr[k]);
                i++;
                k++;
            }
            else if(arr[k] == 2)
            {
                swap(arr[j],arr[k]);
                j--;
            }
            else
            {
                k++;
            }
        }
    }

//approach 2 : count and sort
//Time Complexity : O(N)
//Space Complexity : O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0;
        int one=0;
        int two=0;
        for(auto x : nums)
        {
            if(x == 0) zero++;
            if(x == 1) one++;
            if(x == 2) two++;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(zero)
            {
                nums[i]=0;
                zero--;
                continue;
            }
            if(one)
            {
                nums[i]=1;
                one--;
                continue;
            }   
            if(two)
            {
                nums[i]=2;
                two--;
            }               
        }
    }
};


//driver function
int main()
{
    vector<int> arr({2,1,2});
    sortColors(arr);
    for(auto x : arr)
    {
        cout<<x<<' ';
    }   
	return 0;
}