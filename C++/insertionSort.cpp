//insertion sort using recursion
#include<iostream>
#include<vector>
using namespace std;


void iSort(vector<int>& arr, int n, int i)
{
   if(n==0||n==1)
    return ;

    int j=i-1;
    int key= arr[i];
    while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    iSort(arr,n-1,i+1);

}


int main(){

    vector<int> arr{8,7,4,6,9};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    iSort(arr,arr.size(),1);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}