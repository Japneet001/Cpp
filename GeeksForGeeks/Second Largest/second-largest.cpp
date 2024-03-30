//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr, arr + n);
	    set<int> s;
	    for(int i = 0 ; i < n ; i++){
	       s.insert(arr[i]); 
	       //size_set++;
	    }
	    int size_set = s.size();
	    if (size_set <= 1){
	        return -1;
	    }
	    auto it = s.begin();
	    for (int i = 0 ; i < size_set - 2 ; i++){
	        it++;
	    }
	    return *it;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends