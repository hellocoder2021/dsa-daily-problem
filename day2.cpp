// Remove Vowels from a String
// Given a string S, remove the vowels 'a', 'e', 'i', 'o', and 'u' from it, and return the new string.
// Input: "leetcodeisacommunityforcoders"
// Output: "ltcdscmmntyfrcdrs"

//approach 1
//Time Complexity : O(N)
//Space Complexity : O(1)
#include<bits/stdc++.h>
using namespace std;

string removeVowels(string str)
{
    int res=0;
    int i=0;
    int n=str.size();
    while(i<n)
    {
        if((str[i] != 'a')&&(str[i] != 'e')&&(str[i] != 'i')&&(str[i] != 'o')&&(str[i] != 'u'))
        {
            str[res++]=str[i];
        }
        i++;
    }
    return str.substr(0,res);
}

//approach 2
//Time Complexity : O(N)
//Space Complexity : O(N)
string removeVowelsApproach2(string str)
{
    string ans="";
    int i=0;
    int n=str.size();
    while(i<n)
    {
        if((str[i] != 'a')&&(str[i] != 'e')&&(str[i] != 'i')&&(str[i] != 'o')&&(str[i] != 'u'))
        {
            ans+=str[i];
        }
        i++;
    }
    return ans;
}

int main()
{
    string str;
    cin>>str;
    cout<<removeVowels(str)<<endl;
    cout<<removeVowelsApproach2(str);
	return 0;
}