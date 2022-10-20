// 450dsa q24 : Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

#include <bits/stdc++.h>
using namespace std;

int longest_consecutive_subarray(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    int ans = 0;
    for (auto i = s.begin(); i != s.end(); i++)
    {
        if (s.find(*i - 1) == s.end())
        {
            int num = *i;
            int count = 0;
            while (s.find(num) != s.end())
            {
                count++;
                num++;
            }
            ans = max(ans, count);
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << longest_consecutive_subarray(arr, n);
    return 0;
}
