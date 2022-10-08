// Write a recursive function to print squares of first N natural numbers.
#include<iostream>
#include<math.h>
int Squares(int n);
using namespace std;
int main()
{
    int n;
    cout << "Print number till: ";
    cin >> n;
    n = Squares(n);
    cout << n << endl;
    return 0;
}
int Squares(int n)
{
    static int sum;
    if(n==0)
    {
       return 1;
    }
    else 
    {
        Squares(n-1);
    }
    return sum = sum + (n * n);
}