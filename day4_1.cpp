#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(N^2)
// Space Complexity : O(1)

// 7
// *************           
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *

int main()
{
    int n;
    cin>>n;
    int cols=2*n-1;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            for(int j=0; j<cols; j++)
            {
                cout<<"*";
            }
        }
        else
        for(int j=0; j<cols-i; j++)
        {
                if(j==(i) || j==(cols-i-1))
                    cout<<"*";
                else
                    cout<<' ';
        }
        cout<<endl;
    }
	return 0;
}