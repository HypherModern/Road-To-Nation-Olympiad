//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        long long res = 1, ans = 0;
        for(long long i = N; i > 1; i--)
            res = res*i;
//        while(res!=0) res /= 10, ans++;
//        return ans;
		return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends
