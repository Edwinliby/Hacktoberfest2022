// Write a recursive function to print first N natural numbers in reverse order.
#include<iostream>
using namespace std;
void N_number_rev(int n, int start);
int main()
{
    int n, start=1;
    cout << "Print Number till: ";
    cin >> n;
    N_number_rev(n, start);
}
void N_number_rev(int n, int start)
{
    if(start<=n)
    {
        N_number_rev(n, start+1);
    }
    else
    {
        return;
    }
        cout << start << "\t";
} 