//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    int ans = 0;
    int i = 0;
    while (N > 0){
        int bit = N & 1;
        ans = ans + bit * pow(10,i);
        i++;
        N = N / 2;
    }
    cout << ans;
        
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        toBinary(n);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends