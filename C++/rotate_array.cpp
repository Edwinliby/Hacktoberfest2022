// Contributed by : RajatRathore123-github
// Date : 6-10-2022

// Given an array , rotate the array to the right by k steps, where k is non-negative

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k){
    k = k % nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin() + k);
    reverse(nums.begin() + k,nums.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int k;
    cin >> k;

    rotate(nums,k);
    cout << "Rotated array is : ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

}