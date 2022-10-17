// FLOYD'S TRIANGLE 
// Enter the size: 7
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15       
// 16 17 18 19 20 21    
// 22 23 24 25 26 27 28 

#include <iostream>
using namespace std;

int main(){
    int n, i, j,count=1;
    cout << "Enter the size: ";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
