//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

---------------------------------------------------------------------------
class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) 
    {
        // code here
        long long mIn = INT_MAX, mAx = INT_MIN;
        
        for(int i =0; i<n; i++)
        {
            mIn = min(mIn, a[i]);
            mAx = max(mAx, a[i]);
        }
        
        return{mIn, mAx};
    }
};
------------------------------------------------------------------------------
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// TC: O(n)
// SC: O(1)
