// Write a recursive function to print first N even natural numbers.
#include<iostream>
using namespace std;
void Even_Num(int n, int count, int even);
int main()
{
    int n, count=1, even=2;
    cout << "How many even number will be print: ";
    cin >> n;
    Even_Num(n, count, even);
    return 0;
}
void Even_Num(int n, int count, int even)
{
    if(count<=n)
    {
        cout << even << "\t";
        Even_Num(n, count+1, even+2);
    }
    return;
}