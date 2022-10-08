// Write a recursive function to calculate sum of first N natural numbers.
#include<iostream>
using namespace std;
int Sum_num(int n)
{
    static int sum;
    if(n)
    {
        Sum_num(n-1);
    }
    else 
    {
        return 0;
    }
    return sum = sum + n;
}
int main()
{
    int n;
    cout << "Sum number Till : ";
    cin >> n;
    n = Sum_num(n);
    cout << n << endl;
    return 0;
}