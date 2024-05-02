//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n)
    {
        
        int difference = (arr[n-1] - arr[0])/n;
        
        int start = 0, end = n-1;
        
            
        while(start <= end)
        {
            int mid = (start+end)/2;
            
            if(arr[mid+1] - arr[mid] != difference)
            {
                return arr[mid] + difference;
            }
            if(arr[mid] - arr[mid-1] != difference)
            {
                return arr[mid-1] + difference;
            }
            
            if(mid > 0 and (arr[mid] - arr[0]) != mid*difference)
            {
                end = mid -1;
            }
            
            else
            {
                start = mid +1;
            }
         
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// TC: O(log n)

// Binary Search
