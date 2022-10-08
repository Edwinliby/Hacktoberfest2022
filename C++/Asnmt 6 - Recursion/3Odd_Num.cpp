// Write a recursive function to print first N odd natural numbers.
#include<iostream>
using namespace std;
void Odd_Num(int n, int value, int odd);
int main()
{
    int n, value=1, odd=1;
    cout << "How many odd number will be print: ";
    cin >> n;
    Odd_Num(n, value, odd);
}
void Odd_Num(int n, int value, int odd)
{
    if(value<=n)
    {
        cout << odd << "\t";
        odd += 2;
        Odd_Num(n, value+1, odd);
    }
    return;
}