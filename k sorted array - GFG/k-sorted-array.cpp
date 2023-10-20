//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
         unordered_map<int,int>map;
        for(int i = 0; i < n; i++){
            map[arr[i]]=i;
        }
        sort(arr, arr+n);
        for(int i = 0; i < n; i++)
        {
            if(abs(map[arr[i]]-i) > k)
                return "No";
        }
        return "Yes";
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends