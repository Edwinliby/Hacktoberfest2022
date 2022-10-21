// Problem statement
// Given an array A, find the length of the longest strictly increasing subsequence (LIS).
// A subsequence is a sequence that can be derived from an array by deleting some or no elements such that the order of the remaining elements remain the same.
//Testcase: 
// A: [10, 20, 2, 5, 3, 8, 8, 25, 6]
// Result: 4
// Explanation: Longest increasing subsequence: [2, 5, 8, 25]

#include<bits/stdc++.h>

using namespace std;

int getLengthOfLIS(vector<int> &A) {
    vector<int>B=A;
	int n=A.size();
	sort(B.begin(),B.end());
	int dp[2][n+1];
	for(int i=0;i<=n;i++){
		dp[0][i]=0;
		dp[1][i]=0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(A[i-1]==B[j-1]){
				if(j>1&&B[j-1]==B[j-2]){
					dp[i&1][j]=max(dp[(i-1)&1][j],dp[i&1][j-1]);	
				}
				else{
					dp[i&1][j]=1+dp[(i-1)&1][j-1];
				}
			}
			else{
				dp[i&1][j]=max(dp[(i-1)&1][j],dp[i&1][j-1]);
			}
			// cout<<dp[i][j]<<" ";
		}
		// cout<<"\n";
	}
	return dp[n&1][n];
}

int main(){
    int n;
    cout<<"Enter length of the array:";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<"Length of Longest increasing subsequence is "<<getLengthOfLIS(v);
    return 0;
}
