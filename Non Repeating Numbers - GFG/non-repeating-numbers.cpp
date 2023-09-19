//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=nums.size();
       int XOR=0;

       for(int i=0;i<n;i++){
           XOR = XOR^nums[i];
       }
       //right most set bit
       int right_bit= XOR & ~(XOR-1);
       int x,y;
        x=0; y=0;

       for(int i=0;i<n;i++)
       {
           if(nums[i]&right_bit){
               x = x^nums[i];
           }
           else
               y = y^nums[i];
       }

         if(x < y) return {x,y};
         else return {y,x};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends