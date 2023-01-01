#include<bits/stdc++.h>
using namespace std;

// 6
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *

int main()
{
    int n;
    cin>>n;
    int mid=(2*n-1)/2;
    for(int i=0; i<n; i++)
    {
        int k=1;
        for(int j=0; j<2*n-1; j++)
        {
            if(k&&((j>=(mid-i)) && (j<=(mid+i))))
            {
                cout<<"*";
                k=0;
            }
            else if((!k)&&((j>=(mid-i)) && (j<=(mid+i))))
            {
                k=1;
                cout<<' ';
            }
            else
            {
                if(j>(mid+i))
                    break;
                cout<<' ';
            }
        }
        cout<<endl;
    }
	return 0;
}