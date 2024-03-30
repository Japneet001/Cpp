//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        int max_occuring = INT_MIN;
        char max_char;
        unordered_map <char, int> freq;
        for (int i = 0 ; i < str.length() ; i++){
            freq[str[i]]++;
        }
        
        for (auto it: freq){
            if (it.second > max_occuring){
                max_occuring = it.second;
                max_char = it.first;
            }
            else if (it.second == max_occuring){
                if (it.first < max_char){
                    max_char = it.first;
                }
            }
        }
        return max_char;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends