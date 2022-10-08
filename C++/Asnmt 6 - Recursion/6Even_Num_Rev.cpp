// Write a recursive function to print first N even natural numbers in reverse order.
#include<iostream>
using namespace std;
void Even_Num_Rev(int n, int count, int even)
{
    if(count <= n)
    {
        Even_Num_Rev(n, count+1, even+2);
    }
    else 
    return;
    cout << even << "\t";
}
int main()
{
    int n, count=1, even=2;
    cout << "How many even value will be print: ";
    cin >> n;
    Even_Num_Rev(n, count, even);
    return 0;
}