 #include<stdio.h>
 #include<iostream>
 using namespace std;
 
int maxSubArray(int a[],int n)
{
    int curSum=0,maxSum=0;
    for (int i = 0; i < n; i++)
    {
        curSum=curSum+a[i];
        if(curSum>maxSum)
            maxSum=curSum;
        if(curSum<0)
            curSum=0;
    }
    return maxSum;
}

 int main()
 {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x=maxSubArray(a,n);
     cout<<"Max Sum SubArray is: "<<x;
 }
