// Write a recursive function to print first N nartural numbers.
#include<iostream>
using namespace std;
void N_natural(int a)       // a = 5; ||                 // 5 initial
{                                                        // 4
    if(a!=0)      // false                               // 3
    {                                                    // 2
        N_natural(a-1);     // 10-1 = 9 ||               // 1
    }                                                    // 0
    else
    {
        return;
    }
    cout << a << "\t";
}
int main()
{
    int n;  
    cout << "Enter a number :  ";
    cin >> n;       // 5 value
    cout << "-----------Series--------------\n";
    N_natural(n);       // n = 5
}