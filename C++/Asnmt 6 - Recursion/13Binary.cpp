// Write a recursive function to print binary of a decimal number.
#include<iostream>
using namespace std;
void Binary(int n, int rem)
{
    if(n>0)
    {
        Binary(n/2, rem = n % 2);
    }
    else
    {
        return;
    }
    cout << rem << "\t";
}
int main()
{
    int n, rem=0;
    cout << "Enter number: ";
    cin >> n;
    Binary(n, rem);
}