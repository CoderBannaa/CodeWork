//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                reverse(s.begin()+j,s.begin()+i); 
            
            j=i+1;
            }
            
        }
        reverse(s.begin()+j,s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends