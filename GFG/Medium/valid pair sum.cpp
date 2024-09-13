//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++


class Solution{
    
    public:
    long long ValidPair(int a[], int n) 
    { 
    	// Your code goes here 
    	sort(a,a+n);
    	long long int count=0;
    	int i=n-1;
    	int j=i-1;
    	while(j>=0 && i<n){
    	    if(a[i]+a[j]>0){
    	        count+=(n-i);
    	        i--;
    	        j--;
    	    }else{
    	        i++;
    	    }
    	}
    	return count;
    }   
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int array[n];
		for (int i = 0; i < n; ++i)
			cin>>array[i];
	    Solution obj;
		cout << obj.ValidPair(array, n) <<"\n";
	}
	return 0; 
} 


// } Driver Code Ends