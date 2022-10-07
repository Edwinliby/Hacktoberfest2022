#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
    void solve(vector<int> nums, vector<int> op)
    {
        if(nums.size()==0)
        {
            ans.push_back(op);
            return ; 
        }
        vector<int> op1=op;
        vector<int> op2=op;
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1);
        solve(nums,op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> op;
        solve(nums, op);
        return ans;
    }

int main() {
	// your code goes here
	vector<int> v={1,2,3};
	vector<vector<int>> ans =subsets(v);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	return 0;
}