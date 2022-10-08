// Write a recursive function to calculate factorial of a number.
#include<iostream>
using namespace std;
int Factorial(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    n = Factorial(n);
    cout << n << endl;
    return 0;
}
int Factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int so = Factorial(n-1);
    cout << "n " << n << "   so " << so << endl;  // for better understanding
    return n * so;
}