//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstocc(int arr[], int n, int x){
        int start = 0;
        int end = n - 1;
        int ans = -1;
        while (start <= end){
            int mid = start +(end - start)/2;
            if (arr[mid]==x){
                ans = mid;
                end = mid - 1;
            }
            else if (arr[mid] < x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
    
    int lastocc(int arr[], int n, int x){
        int start = 0;
        int end = n - 1;
        int ans = -1;
        while (start <= end){
            int mid = start +(end - start)/2;
            if (arr[mid]==x){
                ans = mid;
                start = mid + 1;
            }
            else if (arr[mid] < x){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> pair;
        
        int first = firstocc(arr, n, x);
        int last = lastocc(arr, n, x);
        
        pair.push_back(first);
        pair.push_back(last);
        
        return pair;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends