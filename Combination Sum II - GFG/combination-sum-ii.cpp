//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void findCombination(int ind , int target, vector<int> &candidates,vector<vector<int>>&arr,
  vector<int> &ds){
      if(target==0){
          arr.push_back(ds);
      return ;
      }
      
      for(int i=ind;i<candidates.size();i++){
          if(i>ind && candidates[i]==candidates[i-1])continue;
          if(candidates[i]>target)break;
          
          ds.push_back(candidates[i]);
          
          findCombination(i+1,target-candidates[i],candidates,arr,ds);
          ds.pop_back();
      }
      
      
      
      
  }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        vector < vector < int >> ans;
      vector < int > ds;
       sort(candidates.begin(), candidates.end());
       
      findCombination(0, target, candidates, ans, ds);
      return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends