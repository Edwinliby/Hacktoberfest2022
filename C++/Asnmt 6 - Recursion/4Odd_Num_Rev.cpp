// Write a recursive function to print first N odd natural numbers in reverse order.
#include<iostream>
using namespace std;
void Odd_Num_Rev(int n, int count, int odd)
{
    if(count<=n)
    {
        Odd_Num_Rev(n, count+1, odd+2);
    }
    else 
    {
        return;
    }
    cout << odd << "\t";
}
int main()
{
    int n, count=1, odd=1;
    cout << "How many odd number will be print: ";
    cin >> n;
    Odd_Num_Rev(n, count, odd);
    return 0;
}